#include <ctype.h>
#include <stdio.h>

#define K 13

int main( void ) {
    char c;

    while ( ( c = getchar() ) != '.' ) {
        if ( isalpha( c ) ) {
            if ( isupper( c ) ) {
                putchar( 'A' + ( c - 'A' + K ) % 26 );
            } else {
                putchar( 'a' + ( c - 'a' + K ) % 26 );
            }
        } else {
            putchar( c );
        }
    }

    printf( "\n" );

    return 0;
}