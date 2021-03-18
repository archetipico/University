#include <stdio.h>

#define N 3

int main( void ) {
    int square[N][N] = {{0}};
    int i = 0;
    int j = N / 2;
    int nn = N * N;
    int k, itemp, jtemp;

    for ( k = 1; k <= nn; k++ ) {
        square[i][j] = k;
        itemp = ( i == 0 ) ? N - 1 : i - 1;
        jtemp = ( j == N - 1 ) ? 0 : j + 1;
        
        if ( square[itemp][jtemp] == 0 ) {
            i = itemp;
            j = jtemp;
        } else {
            i++;
        }
    }

    for ( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < N; j++ ) {
            printf( "%d ", square[i][j] );
        }

        printf( "\n" );
    }

    return 0;
}