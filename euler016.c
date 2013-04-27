#include <gmp.h>
#include <stdio.h>
#include <math.h>

int main() {
		mpz_t a, b, m, r;

	mpz_init(m);
	mpz_ui_pow_ui(m, 2, 1000);

 	char output[1000];
	//gmp_printf("%Zd\n", m); /* ...16808958343740453059 */
 	mpz_get_str(output, 10, m);

 	printf("%s\n", output);
 	int i;
 	int sum=0;
 	for (i=0; output[i] != '\0'; i++) {
 		sum += (output[i] - '0');
 		printf("%i\n", (output[i] - '0'));
 	}
 	printf("%i\n", sum);
	//long long ans = pow(2, 1000);
	//printf("%llu\n", ans);

	/**
	mpz_t power;
	mpz_t base;
	mpz_t exp;
	long raise = 3;
	mpz_init(power);
	mpz_set_ui(power, 0);
	mpz_set_ui(base, 3);
	mpz_pow_ui(power, base, raise);
	mpz_out_str(stdout,10,power);
	*/
	return 0;
}

/**

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

*/