#include <stdio.h>
#include <math.h>

int main() {
	int i;
	long sum = 0;
	for (i=2; i<2000000; i++) {
		if (isPrime(i)) {
			//printf("%i\n", i);
			sum += i;
		}
	}
	printf("%lu\n", sum);
	return 0;
}


int isPrime(int num) {

    int i;
    int max = (int) sqrt(num);
    for (i=2; i<=max; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
