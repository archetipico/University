// T = Θ(y), S = Θ(1)

#include <stdio.h>

int pow_by_prod(int x, int y);

int main( void ) {
    int x = 0;
    int y = 0;

    printf("Insert two numbers: ");
    scanf("%d %d", &x, &y);

    printf("%d", pow_by_prod(x, y));
}

/* Power operation using multiplication */
int pow_by_prod(int x, int y) {
    int res = 1;

    while (y > 0) {
        res *= x;
        y--;
    }

    return res;
}
