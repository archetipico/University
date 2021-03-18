#include <ctype.h>
#include <stdio.h>

int main( void ) {
    char c;

    printf( "Insert a character: " );
    scanf( "%c", &c );

    if ( !isalpha( c ) ) {
        printf( "%c is not a letter or is not an italian letter\n", c );
    } else {
        switch ( tolower( c ) ) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf( "%c is a vowel\n", c );
                break;
            
            case 'j':
            case 'k':
            case 'w':
            case 'x':
            case 'y':
                printf( "%c is not an italian letter\n", c );
                break;
            
            default:
                printf( "%c is a consonant", c );
                break;
        }
    }

    return 0;
}