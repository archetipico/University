#include <stdio.h>

int main( void ) {
    int n, max;
    printf("Insert a number: ");
    scanf("%d", &n);
    max = n;

    printf("1 ");
    for (int i = 2; i <= (max / 2) + 1; i++) {
        if ( n % i == 0 ) {
            n /= i;
            printf("%d ", i);
            i--;
        }
    }

    if ( max != 2 ) {
        printf("%d", max);
    }

    return 0;
}