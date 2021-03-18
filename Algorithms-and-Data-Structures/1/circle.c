#include <math.h>
#include <stdio.h>

float area( float r );

int main( void ) {
    float r;
    printf("Insert radius: ");
    scanf("%f", &r);

    printf("%f", area(r));
    
    return 0;
}

float area( float r ) {
    return r * r * M_PI;
}