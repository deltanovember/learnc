#include <stdio.h>
#include <math.h>

int getTriangle(int num) {
	if (num == 1) {
		return num;
	} else {
		return num + getTriangle(num - 1);
	}

}

int countFactors(long num) {
	int i;
	int count = 0;
	int max = (int) sqrt(num) + 1;
	for (i=1; i<=max; i++) {
		if (0 == (num % i)) {
			count+=2;
		}
	}
	return count;
}


int main() 
{
	long i=7;
	int max = 0;
	while (1) {
		int tri = getTriangle(i);
		int factors = countFactors(tri);
		
		i++;
		if (factors > max) {
			max = factors;
			printf("%i\n", factors);
		}
		if (factors > 500) {
			printf("%i\n", tri);
			break;
		}	
	}

	return 0;
}