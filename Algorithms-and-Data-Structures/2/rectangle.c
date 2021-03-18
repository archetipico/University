#include <math.h>
#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

typedef struct {
    Point p1;
    Point p2;
} Rectangle;

int main( void ) {
    float b, h, area, per;
    Rectangle r;

    printf( "Insert bottom-left coordinates: ");
    scanf( "%f %f", &r.p1.x, &r.p1.y);

    printf( "Insert top-right coordinates: ");
    scanf( "%f %f", &r.p2.x, &r.p2.y);

    b = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;
    area = b * h;
    per = 2 * ( b + h );
    printf( "Area: %f\nPerimeter: %f", area, per );

    return 0;
}