#include <stdio.h>

#define N 100

int main( void ) {
    char word[N];
    char c;
    int count = 0;

    printf( "Insert a word: " );
    while ( ( c = getchar() ) != '.' ) {
        word[count] = c;
        count++;
    }

    int j = count - 1;
    for ( int i = 0; i < j; i++ ) {
        if ( word[i] != word[j] ) {
            printf( "Not palindrome\n" );
            return 0;
        }

        j--;
    }

    printf( "Palindrome\n" );

    return 0;
}