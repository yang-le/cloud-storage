#include <stdio.h>
#include <gmp.h>

#define W_SEARCH_BEG 0
#define X_SEARCH_BEG 0
#define Y_SEARCH_BEG 0
#define Z_SEARCH_BEG 0

#define W_SEARCH_END W_SEARCH_BEG + 1000
#define X_SEARCH_END X_SEARCH_BEG + 1000
#define Y_SEARCH_END Y_SEARCH_BEG + 1000
#define Z_SEARCH_END Z_SEARCH_BEG + 1000

#define ROOT 3

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(int argc, char* argv[])
{
	unsigned int _w, _x, _y, _z;
	unsigned int numFind = 0;

	mpz_t w, x, y, z;
	mpz_t W, X, Y, Z;
	mpz_inits(w, x, y, z, W, X, Y, Z, NULL);

	mpz_t ZSearchEnd;
	mpz_init(ZSearchEnd);
	mpz_ui_pow_ui(ZSearchEnd, Z_SEARCH_END, ROOT);

	for (_w = W_SEARCH_BEG, mpz_set_ui(w, _w); _w < W_SEARCH_END; ++_w, mpz_add_ui(w, w, 1)) {
		mpz_pow_ui(W, w, ROOT);
		
		_x = MAX(X_SEARCH_BEG, _w);mpz_set_ui(x, _x);
		_y = MAX(Y_SEARCH_BEG, _x);mpz_set_ui(y, _y);

		mpz_pow_ui(X, x, ROOT);
		mpz_pow_ui(Y, y, ROOT);
		mpz_add(Z, W, X);
		mpz_add(Z, Z, Y);
		
		if (mpz_cmp(Z, ZSearchEnd) >= 0)
			break;
		
		for (; _x < X_SEARCH_END; ++_x, mpz_add_ui(x, x, 1)) {
			mpz_pow_ui(X, x, ROOT);

			_y = MAX(Y_SEARCH_BEG, _x);mpz_set_ui(y, _y);

			mpz_pow_ui(Y, y, ROOT);
			mpz_add(Z, W, X);
			mpz_add(Z, Z, Y);
			if (mpz_cmp(Z, ZSearchEnd) >= 0)
				break;

			for (; _y < Y_SEARCH_END; ++_y, mpz_add_ui(y, y, 1)) {
				mpz_pow_ui(Y, y, ROOT);
				mpz_add(Z, W, X);
				mpz_add(Z, Z, Y);
				if (mpz_cmp(Z, ZSearchEnd) >= 0)
					break;

				if (mpz_root(z, Z, ROOT) && ((_z = mpz_get_ui(z)) > _y)) {
					++numFind;
					printf("w = %d, x = %d, y = %d, z = %d\n", _w, _x, _y, _z);
				}
			}
		}
	}

//out:
	printf("Result(s) %d find after search from\n w = %d to %d\n x = %d to %d\n y = %d to %d\n", numFind,
		W_SEARCH_BEG, W_SEARCH_END - 1, X_SEARCH_BEG, X_SEARCH_END - 1, Y_SEARCH_BEG, Y_SEARCH_END - 1);

	mpz_clear(ZSearchEnd);
	mpz_clears(w, x, y, z, W, X, Y, Z, NULL);

	return 0;
}

