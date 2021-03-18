#include <stdio.h>

#define LENGTH 1000

int main( void ) {
    int a[LENGTH], i, lun;                  // declaring variables

    for ( i = 0; i < LENGTH; i++ ) {        // scanning i integers, stopping at 0 (or at a[99])
        scanf( "%d", &a[i] );
        if ( a[i] == 0 ) {
            break;
        }
    }

    lun = i;                                // lun = last position filled in the array

    for ( i = lun - 1; i > 0; i-- ) {       // printing the numbers backwards (except a[0])
        printf( "%d", a[i] );
    }

    printf( "%d\n", a[0] );                 // printing a[0]

    return 0;
}