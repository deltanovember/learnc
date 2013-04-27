#include <stdio.h>

int main()
{
    unsigned long long s1 = 1, n = 40, k = 20;
    int i, j;
    for(i = n, j = 1; i >= k + 1, j <= k; i--)
    {
        s1 = s1 * i / j;
        j++;
    }
    printf("%lld\n", s1);
}