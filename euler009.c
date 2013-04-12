#include <stdio.h>
int main() {
	int i, j, k;
	for (i=0; i<1000; i++) {
		for (j=i; j<1000; j++) {
			for (k=j; k<1000; k++) {
				if (i*i + j*j == k*k && i+j+k==1000) {
					printf("%i\n", i*j*k);
				}
			}
		}
	}
	return 0;
}