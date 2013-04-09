#include <stdio.h>
#include "eulerlib.h"
#include <math.h>

int isPrim(int num);

int main(int argc, char *argv[]) {
    int primeCount = 0;
    int i;
    for (i=2;;i++) {
        if (isPrime(i)) {
            primeCount++;
       }
        if (primeCount == 10001) {
            break;
        }
    }
    printf("%d\n", i);
    return 0;
}


int isPrime(int num) {

    int i;
    int max = (int) sqrt(num) + 1;
    for (i=2; i<=max; i++) {
        if (num % i == 0 && max > i)
            return 0;
    }
    return 1;
}

