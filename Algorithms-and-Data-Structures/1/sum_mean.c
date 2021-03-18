#include <stdio.h>

int main( void ) {
    int n;
    int x = 0;
    int count = 0;

    printf( "Insert a number, press return and end it using '0':\n");

    do {
        scanf( "%d", &n );
        x += n;
        count++;

        if ( n == 0 ) {
            count--;
            break;
        }
    } while ( count < 10 );

    printf( "The sum is %d\nWhile the mean is %.2f\n", x, ( (float) x / count ) );

    return 0;
}