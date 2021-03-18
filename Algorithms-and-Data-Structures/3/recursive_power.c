#include <stdio.h>

int power( int b, int e );
int base;

int main( void ) {
    int b, e;

    printf("Insert two numbers, separated by a space: ");
    scanf("%d %d", &b, &e);
    base = b;

    printf("%d", power( b, e ));

    return 0;
}

int power( int b, int e ) {
    if ( e > 1 ) {
        return power( b * base, --e );
    }

    return b;
}