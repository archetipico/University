#include <stdio.h>

#define SCALE_FACTOR ( 5.0f / 9.0f )
#define ZERO 32.0f

int main( void ) {
    float fahr;

    printf( "Insert Fahrenheit temperature: " );
    scanf( "%f", &fahr );

    printf( "%.2f Celsius", ( fahr - ZERO ) * SCALE_FACTOR );

    return 0;
}