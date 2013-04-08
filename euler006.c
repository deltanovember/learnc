#include <stdio.h>

int main() {
    int i;
    int sumSq = 0;
    int sqSum = 0;
    for (i=0; i<=100; i++) {
        sumSq += i*i;
        sqSum += i;
    }
    int result = sqSum * sqSum - sumSq;
    printf("%d\n", result);
    return 0;
}
