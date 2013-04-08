#include <stdio.h>
#include <math.h> 

int main(int argc, char *argv[]) {
    
    int max = (int) sqrt(600851475143);
    int largestPrime = 1;
    int i;
    for (i=2; i< max; i++) {
        if (isPrime(i))
            largestPrime = i;
    }
    printf("%d\n", largestPrime);
    return 0;
}

int isPrime(int num) {
    
    int i;
    for (i=2; i<num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}