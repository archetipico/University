#include <limits.h>
#include <stdio.h>

int main( void ) {
    printf( "short: %d ... %d\n", SHRT_MIN, SHRT_MAX );
    printf( "ushort max: %d\n", USHRT_MAX );
    printf( "int: %d ... %d\n", INT_MIN, INT_MAX );
    printf( "long: %ld ... %ld\n", LONG_MIN, LONG_MAX );

    printf( "schar: %c ... %c\n", SCHAR_MIN, SCHAR_MAX );
    printf( "char: %c ... %c\n", CHAR_MIN, CHAR_MAX );
    printf( "uchar max: %c\n", UCHAR_MAX );

    return 0;
}