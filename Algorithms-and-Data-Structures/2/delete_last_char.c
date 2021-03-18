#include <stdio.h>

#define N 100

int main( void ) {
    char c, s[N];
    int i = 0;

    printf( "Insert a line: " );
    while ( ( c = getchar() ) != '\n' ) {
        s[i] = c;

        if ( c == ' ' && i != 0) {
            s[--i] = c;
        }

        i++;
    }

    for ( int j = 0; j < i - 1; j++ ) {
        putchar( s[j] );
    }

    return 0;
}