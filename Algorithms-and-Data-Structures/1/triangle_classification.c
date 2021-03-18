#include <stdio.h>

int main( void ) {
    float a, b, c;

    printf( "Insert three values separated by spaces: ");
    scanf( "%f %f %f", &a, &b, &c );

    if ( !( a < ( b + c ) && b < ( a + c ) && c < ( a + b ) ) ) {
        printf( "Not a triangle\n" );
    } else if ( a == b && a == c ) {
        printf ( "Equilateral triangle\n" );
    } else if ( a == b || b == c || c == a ) {
        printf ( "Isosceles triangle\n" );
    } else {
        printf( "Scalene triangle\n" );
    }

    return 0;
}