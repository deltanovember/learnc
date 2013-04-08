#include <stdio.h>
int main(int argc, char *argv[]) {
    int first = 1;
    int second = 2;
    int next = 3;
    int sum = second;
    while (next < 4000000) {
        first = second;
        second = next;        
        next = first + second;
        if (next %2 == 0)
            sum += next;
    }
    printf("%d\n", sum);
    return 0;
}