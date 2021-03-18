#include <math.h>
#include <stdio.h>

int main( void ) {
    float a, b, c;
    printf("Insert three coefficients: ");
    scanf("%f %f %f", &a, &b, &c);

    float delta = (b * b) - (4 * a * c);
    float x1, x2;
    if ( delta >= 0 ) {
        x1 = ( (b * -1) + sqrt(delta) ) / 2;
        x2 = ( (b * -1) - sqrt(delta) ) / 2;

        printf("%f, %f", x1, x2);
    } else {
        x1 = ( (b * -1) + sqrt(delta * -1) ) / 2;
        x2 = ( (b * -1) - sqrt(delta * -1) ) / 2;

        printf("%f * i, %f * i", x1, x2);
    }

    return 0;
}