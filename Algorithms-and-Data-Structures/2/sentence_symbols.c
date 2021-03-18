#include <ctype.h>
#include <stdio.h>

int main( void ) {
    int c, c_count[256] = {0};

    while ( ( c = getchar() ) != '.' ) {
        c_count[c]++;
    }

    for ( int i = 0; i < 256; i++ ) {
        if ( c_count[i] != 0) {
            printf( "%c: %d\n", i, c_count[i] );
        }
    }

    return 0;
}