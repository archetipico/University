#include <ctype.h>
#include <stdio.h>

#define N 1000

int main( void ) {
    char c, s[N];
    int i = 0;

    printf( "Insert a sentence: ");
    while ( ( c = getchar() ) != '.' ) {
        s[i++] = c;
    }

    int k;
    printf( "Give me a key: " );
    scanf( "%d", &k);

    for ( int j = 0; j < i; j++ ) {
        if ( isalpha( s[j] ) ) {
            if ( isupper( s[j] ) ) {
                putchar( 'A' + ( s[j] - 'A' + k ) % 26 );
            } else {
                putchar( 'a' + ( s[j] - 'a' + k ) % 26 );
            }
        }
    }

    return 0;
}