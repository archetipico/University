#include <stdio.h>

int isprime( int n );
int i = 2;

int main( void ) {
    int n;

    printf("Insert a number: ");
    scanf("%d", &n);

    int res = isprime( n );
    if ( res == 0 ) {
        printf("%d is not prime", n);
    } else {
        printf("%d is prime", n);
    }

    return 0;
}

int isprime( int n ) {
    if ( i == ( n / 2 ) + 1 || n == 2 ) {
        return 1;
    } else if ( n % i == 0 || n < 2 ) {
        return 0;
    } else {
        i++;
        return isprime( n );
    }
}