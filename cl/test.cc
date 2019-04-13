#include <iostream>
#define CL_HPP_ENABLE_EXCEPTIONS
//#define CL_HPP_MINIMUM_OPENCL_VERSION 100
//#define CL_HPP_TARGET_OPENCL_VERSION 120
#include <cl/cl2.hpp>

int main()
{
	std::vector<cl::Platform> platforms;
	cl::Platform::get(&platforms);
	cl::Platform platform;
	cl::Device device;
	double max {
		0
	};

	for (auto p : platforms) {
		std::cout << "[PLATFORM] " << p.getInfo<CL_PLATFORM_NAME>() << std::endl;

		std::vector<cl::Device> devices;
		p.getDevices(CL_DEVICE_TYPE_ALL, &devices);

		for (auto d : devices) {
			std::cout << "[DEVICE] " << d.getInfo<CL_DEVICE_NAME>() << std::endl
				<< "[CUs]" << d.getInfo<CL_DEVICE_MAX_COMPUTE_UNITS>() << std::endl
				<< "[DIMS] ";
			auto dims = d.getInfo<CL_DEVICE_MAX_WORK_ITEM_SIZES>();
			double size = 1;
			for (auto s : dims) {
					std::cout << s << " ";
					size *= s;
			}
			std::cout << std::endl;
			if (size > max) {
				max = size;
				device = d;
				platform = p;
			}
		}
	}

	cl::Platform::setDefault(platform);
	cl::Device::setDefault(device);

	std::cout << "Selected " << std::endl
		<< "[PLATFORM] " << cl::Platform::getDefault().getInfo<CL_PLATFORM_NAME>() << std::endl
		<< "[DEVICE] " << cl::Device::getDefault().getInfo<CL_DEVICE_NAME>() << std::endl
		<< "[DIMS] ";
	auto dims = cl::Device::getDefault().getInfo<CL_DEVICE_MAX_WORK_ITEM_SIZES>();
	for (auto s : dims) {
		std::cout << s << " ";
	}
	std::cout << std::endl;

	std::string kernel {
	R"CLC(
		#pragma OPENCL_EXTENSION cl_intel_printf : enable
		kernel void test(global int* output) {
			if (output[0]) {
			//	printf("find %d %d %d %d\n", output[0], output[1], output[2], output[3]);
				return;
			}

			long2 w = get_global_id(0) + 1;
			long2 x = get_global_id(1) + 1;
			long2 y = get_global_id(2) + 1;

			long2 a = w * w * w * w + x * x * x * x + y * y * y * y;
			
			int RANGE = get_global_size(0);
			for (int i = 1; i < RANGE; ++i) {
				long2 z = i;
				long2 b = z * z * z * z;
				if (all(a == b)) {
					output[0] = w.s0;
					output[1] = x.s0;
					output[2] = y.s0;
					output[3] = z.s0;
					break;
				}
			}

			//if (((w.s0 & 0xf) == 0xf) && ((x.s0 & 0xf) == 0xf) && ((y.s0 & 0xf) == 0xf)) {
			//	printf("%x %x %x search end\n", get_global_id(0), get_global_id(1), get_global_id(2));
			//}
		}
	)CLC"
	};

	cl::Program program {
		kernel
	};

	try {
		program.build();
	} catch (...) {
		// Print build info for all devices
		auto buildInfo = program.getBuildInfo<CL_PROGRAM_BUILD_LOG>();
		for (auto& pair : buildInfo) {
			std::cerr << pair.second << std::endl << std::endl;
		}
		return 1;
	}

	cl::KernelFunctor<cl::Buffer> func {
		program, "test" 
	};

	std::vector<cl_int> output(4, 0);
	cl::Buffer outputBuffer(begin(output), end(output), false);
	func(cl::EnqueueArgs(cl::NDRange(dims[0], dims[1], dims[2])), outputBuffer);
	cl::copy(outputBuffer, begin(output), end(output));

	return 0;
}
