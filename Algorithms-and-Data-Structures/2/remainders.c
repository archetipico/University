#include <stdio.h>

#define N 10

int main( void ) {
    int val, mod, i = 0;
    int rest[N] = {0};

    printf( "Insert a value and a module, separated by a space: ");
    scanf( "%d %d", &val, &mod);
    
    do {
        rest[i++] = val % mod;
    } while ( ( val /= mod ) > 0 );

    while ( i > 0 ) {
        printf( "%d ", rest[--i] );
    }

    printf( "\n" );

    return 0;
}