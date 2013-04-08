#include <stdio.h>
int main(int argc, char *argv[]) {
    int distance = 100;
    float power = 2.345;
    double super_power = 56789.4532;
    char initial = 'A';
    char first_name[] = "Zed";
    char last_name[] = "Shaw";
    
    printf("you %d", distance);
    printf("you %f", power);
    printf("you %f", super_power);
    printf("you %c", initial);
    printf("you %s", first_name);
    printf("you %c %s", initial, last_name);
    return 0;
}