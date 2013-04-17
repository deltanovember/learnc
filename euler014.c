#include <stdio.h>


long collatz(long seed) {

	long count = 1;

	while (seed != 1) {
		if (seed % 2 == 0) {
			seed = seed / 2;
		} else {
			seed = 3 * seed + 1;
		}
		count++;
	}
	return count;
}

int main() {
	int max = 0;
	int index = 0;
	int i;

	for (i=10; i<1000000; i++) {
		long current = collatz(i);
		if (current > max) {
			max = current;
			index = i;
		}
	}
	printf("%i\n", index);
	return 0;
}