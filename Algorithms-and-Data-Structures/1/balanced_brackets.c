#include <stdio.h>

int main( void ) {
    char c;
    int open = 0, closed = 0;

    while ( ( c = getchar() ) != '.' ) {
        if ( c == '(' ) {
            open++;
        } else if ( c == ')' ) {
            closed++;
        } else {
            continue;
        }

        if ( open < closed ) {
            printf( "Not balanced\n" );
            return 0;
        }
    }

    if ( closed != open ) {
        printf( "\nNot balanced" );
        return 0;
    }

    printf( "Balanced\n" );

    return 0;
}