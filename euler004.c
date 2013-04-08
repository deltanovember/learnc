#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    
    int i, j, max;
    max = 0;
    for (i=0; i<1000; i++) {
        for (j=0; j<1000; j++) {
            int product = i*j;
            if (isPalindrome(product) && product > max)
                max = product;
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}

int isPalindrome(int num) {
    char str[10];
    char reversed[10];
    sprintf(str, "%d", num);
    strcpy(reversed, str);
    
    int length = strlen(reversed);
      int c, i, j;

      for (i = 0, j = length - 1; i < j; i++, j--) {
         c = reversed[i];
         reversed[i] = reversed[j];
         reversed[j] = c;
      }

    return strcmp(str,reversed) == 0;
}