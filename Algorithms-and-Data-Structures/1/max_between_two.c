#include <stdio.h>

int main( void ) {
    int a, b;

    printf( "Insert two numbers and a space between them: " );
    scanf( "%d %d", &a, &b );

    printf( "Higher number: %d", ( a > b ? a : b ) );

    return 0;
}