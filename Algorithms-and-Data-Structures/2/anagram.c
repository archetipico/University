#include <ctype.h>
#include <stdio.h>

#define N 26

int main( void ) {
    char c;
    int word_one[N];
    int word_two[N];

    for ( int i = 0; i < N; i++ ) {
        word_one[i] = 0;
        word_two[i] = 0;
    }

    printf( "Insert the first word: " );
    while ( ( c = getchar() ) != '\n' ) {
        if ( isalpha(c) ) {
            word_one[ toupper(c) - 65 ]++;
        }
    }

    printf( "Insert the second word: " );
    while ( ( c = getchar() ) != '\n' ) {
        if ( isalpha(c) ) {
            word_two[ toupper(c) - 65 ]++;
        }
    }

    char *result;
    int bool = 1;
    for( int i = 0; i < N; i++ ) {
        if ( word_one[i] != word_two[i] ) {
            result = "That's not an anagram...";
            bool = 0;
        }
    }

    if ( bool ) {
        result = "That's an anagram!";
    }

    printf( "%s", result );
    
    return 0;
}