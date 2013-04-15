// gcc -o euler013 euler013.c -lgmp

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main()
{
	char line[101];
	FILE *inFile = fopen("13.txt", "r");
	mpz_t sum;
	mpz_init(sum);
	mpz_set_ui(sum, 0);

	int flag;
	while (fscanf(inFile, "%79[^\n]\n", line) == 1) {
		mpz_t n;
		mpz_init(n);
		mpz_set_ui(n, 0);

		flag = mpz_set_str(n,line, 10); 
		assert(flag == 0);

		mpz_add(sum, sum, n);
	}
	mpz_out_str(stdout,10,sum);
	return 0;
}