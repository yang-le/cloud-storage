#include <stdio.h>
#include <stdlib.h>
#include <CL/opencl.h>
#include "clutil.h"

#define SAFE_FREE(x) free(x); x = NULL

int main(int argc, char* argv[])
{
	cl_int clRet = 0;
	cl_uint num_platforms = 0;
	cl_platform_id *platforms = NULL;
	cl_uint *num_devices = 0;
	cl_device_id **devices = NULL;
	cl_context *contexts = NULL;
	cl_program program;
	cl_kernel kernel;
	cl_mem result;

	clRet = getPlatforms(&platforms, &num_platforms);
	if (clRet != CL_SUCCESS) {
		printf("getPlatforms failed, err is %d\n", clRet);
		return clRet;
	}

	printf("got %d platform(s)\n", num_platforms);

	num_devices = (cl_uint *)calloc(num_platforms, sizeof(cl_uint));
	if (NULL == num_devices) {
		printf("alloc mem for num_devices failed!\n");
		return CL_OUT_OF_HOST_MEMORY;
	}

	devices = (cl_device_id **)calloc(num_platforms, sizeof(cl_device_id *));
	if (NULL == devices) {
		printf("alloc mem for devices failed!\n");
		return CL_OUT_OF_HOST_MEMORY;
	}

	contexts = (cl_context *)calloc(num_platforms, sizeof(cl_context));
	if (NULL == contexts) {
		printf("alloc mem for contexts failed!\n");
		return CL_OUT_OF_HOST_MEMORY;
	}

	for (int i = 0; i < num_platforms; ++i) {
		char *name = getPlatformName(platforms[i]);
		if (name) {
			printf("platform[%d] is %s\n", i, name);
		}

		SAFE_FREE(name);
		
		clRet = getDevices(platforms[i], CL_DEVICE_TYPE_ALL, &(devices[i]), &num_devices[i]);
		if (clRet != CL_SUCCESS) {
			printf("getDevices failed, err is %d\n", clRet);
			continue;
		}

		for (int j = 0; j < num_devices[i]; ++j) {
			char *name = getDeviceName(devices[i][j]);
			if (name) {
				printf("\t device[%d] is %s\n", j, name);
			}

			SAFE_FREE(name);
			
			size_t *ranges = NULL;
			cl_uint dims = getNDRange(devices[i][j], &ranges);
			printf("\t NDRange = ");
			for (int k = 0; k < dims; ++k) printf("%ld ", ranges[k]);
			printf("\n");

			SAFE_FREE(ranges);
		}

		contexts[i] = clCreateContext(NULL, num_devices[i], devices[i], NULL, NULL, &clRet);
		if (clRet != CL_SUCCESS) {
			printf("clCreateContextFromType failed, ret = %d\n", clRet);
		}
	}

	clRet = loadProgramFromFile(contexts[0], "./kernel.cl", &program);
	if (clRet != CL_SUCCESS) {
		printf("loadKernelFromFile failed, err is %d\n", clRet);
	}

	clRet = clBuildProgram(program, 0, NULL, NULL, NULL, NULL);
	if (clRet != CL_SUCCESS) {
		char *log = getProgramBuildLog(program, devices[0][0]);
		printf("clBuildProgram failed, err is %d\nLog:%s\n", clRet, log);
	}

	kernel = clCreateKernel(program, "myKernel", &clRet);
	if (clRet != CL_SUCCESS) {
		printf("clCreateKernel failed, err is %d\n", clRet);
	}

	result = clCreateBuffer(contexts[0], CL_MEM_WRITE_ONLY | CL_MEM_HOST_READ_ONLY, 100 * 100 * 100 * sizeof(cl_ulong), NULL, &clRet);
	if (clRet != CL_SUCCESS) {
		printf("clCreateBuffer failed, err is %d\n", clRet);
	}

	clRet = clSetKernelArg(kernel, 0, sizeof(cl_mem), &result);
	if (clRet != CL_SUCCESS) {
		printf("clSetKernelArg failed, err is %d\n", clRet);
	}

	for (int i = 0; i < num_platforms; ++i) {
		clRet = clReleaseContext(contexts[i]);
		if (clRet != CL_SUCCESS) {
			printf("clReleaseContext failed, err is %d\n", clRet);
		}
		SAFE_FREE(devices[i]);
	}

	SAFE_FREE(contexts);
	SAFE_FREE(num_devices);
	SAFE_FREE(devices);
	SAFE_FREE(platforms);
	return 0;
}

