#include <ctype.h>
#include <stdio.h>

int main( void ) {
    int n; 
    printf( "How long is the array? " );
    scanf( "%d", &n );

    int temp;
    int count = 0;
    int prev = -1;
    int missing = -1;
    while ( count < n && scanf( "%d", &temp ) ) {
        if ( ( temp - prev ) != 1 ) {
            missing = temp - 1;
            break;
        }

        prev = temp;
        count++;
    }

    printf( "%d", missing );
}