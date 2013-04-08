#include <stdio.h>
#include <math.h> 

int main(int argc, char *argv[]) {
    
    long limit = 600851475143;
    int max = (int) sqrt(limit);
    int largestPrime = 1;
    int i;
    for (i=2; i< max; i++) {
        if (isPrime(i) && limit % i == 0)
            largestPrime = i;
    }
    printf("%d\n", largestPrime);
    return 0;
}

int isPrime(int num) {
    
    int i;
    int max = (int) sqrt(num);
    for (i=2; i<max; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}