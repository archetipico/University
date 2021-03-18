#include <stdio.h>

#define N 64

void hanoi( int n, int from, int aux, int to );

int main( void ) {
    hanoi( N, 1, 2, 3 );

    return 0;
}

void hanoi( int n, int from, int aux, int to ) {
    printf("%d goes from %d to %d\n", n, from, to);

    if ( n == 1 ) {
        return;
    }

    hanoi( n - 1, from, to, aux );
    hanoi( n - 1, aux, from, to );
}