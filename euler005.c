#include <stdio.h>
int main(int argc, char *argv[]) {
    
    int smallest = 20;
    while (1) {
        if (divisible(smallest)) {
            printf("%d\n", smallest);
            break;
        }
        else
            smallest+=20;
    }
    return 0;
}

int divisible(int num) {
    int i;
    for (i=1; i<20; i++) {
        if (num % i != 0)
            return 0;
    }
    return 1;
}