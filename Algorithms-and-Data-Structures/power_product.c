// T = Θ(y), S = Θ(1)

#include <stdio.h>

int pow_mult(int x, int y);

int main( void ) {
    int x = 0;
    int y = 0;

    printf("Insert two numbers: ");
    scanf("%d %d", &x, &y);

    printf("%d", pow_mult(x, y));
}

/* Power operation using multiplication */
int pow_mult(int x, int y) {
    int res = 1;

    while (y > 0) {
        res *= x;
        y--;
    }

    return res;
}
