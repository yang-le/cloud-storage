#define RANGE 100

__kernel void myKernel(__global ulong res[RANGE][RANGE][RANGE])
{
	size_t w = get_global_id(0) + 1;
	size_t x = get_global_id(1) + 1;
	size_t y = get_global_id(2) + 1;

	ulong r = 0;
	ulong z = 0;

	if ((w < RANGE) && (x < RANGE) && (y < RANGE))
		r = w * w * w * w + x * x * x * x + y * y * y;
	else
		return;

	for (z = 1; z < RANGE; ++z) {
		if (r == z * z * z) {
			res[w - 1][x - 1][y - 1] = z;
			break;
		}
	}
}

