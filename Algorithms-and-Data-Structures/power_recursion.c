// T = Θ(log y), S = Θ(log y)

#include <stdio.h>

int pow_recursion(int x, int y);

int main( void ) {
    int x = 0;
    int y = 0;

    printf("Insert two numbers: ");
    scanf("%d %d", &x, &y);

    printf("%d", pow_recursion(x, y));
}

/* Power operation using recursion */
int pow_recursion(int x, int y) {
    int res = 0;

    if (y == 0) {
        return 1;
    } else {
        res = pow_recursion(x, y/2);
        res *= res;
        if (y % 2 != 0) {
            res *= x;
        }
    }

    return res;
}

