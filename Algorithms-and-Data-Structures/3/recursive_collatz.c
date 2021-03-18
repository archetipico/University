#include <stdio.h>

int collatz( int n );
int count = 0;

int main( void ) {
    int n;

    printf("Insert a number: ");
    scanf("%d", &n);

    collatz( n );
    printf("\nLength: %d", count);

    return 0;
}

int collatz( int n ) {
    count++;
    printf("%d ", n);
    if ( n % 2 == 0 ) {
        return collatz( n / 2 );
    } else if ( n == 1 ) {
        return 0;
    } else {
        return collatz( ( n * 3 ) + 1 );
    }
}