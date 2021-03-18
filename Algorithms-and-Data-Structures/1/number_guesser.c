#include <stdio.h>

#define MAX 1000

int main( void ) {
    int min = 0;
    int max = MAX;
    int n;
    char answer;

    for ( ;; ) {
        n = min + ( max - min ) / 2;

        printf( "Is the number equals to %d? ", n );
        scanf(" %c", &answer );

        switch ( answer ) {
            case '<':
                max = n - 1;
                break;

            case '>':
                min = n + 1;
                break;
            
            case '=':
                printf( "The number was %d\n", n );
                return 0;

            default:
                break;
        }
    }

    return 0;
}