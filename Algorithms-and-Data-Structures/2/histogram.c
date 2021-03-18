#include <ctype.h>
#include <stdio.h>

#define N 26

int main( void ) {
    char c;
    int letters[N];

    for ( int i = 0; i < N; i++) {
        letters[i] = 0;
    }

    printf( "Insert a line and end it with a dot: " );
    while ( ( c = getchar() ) != '.' ) {
        if ( isalpha(c) ) {
            letters[ toupper(c) - 65 ]++;
        }
    }

    for ( int i = 0; i < N; i++ ) {
        if ( letters[i] == 0 ) {
            continue;
        }

        printf( "%c ", i + 65 );
        for ( int j = 0; j < letters[i]; j++ ) {
            printf("*");
        }

        printf( "\n" );
    }

    return 0;
}