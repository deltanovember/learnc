#include <math.h>
int isPrime(int num) {
    
    int i;
    int max = (int) sqrt(num);
    for (i=2; i<max; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
