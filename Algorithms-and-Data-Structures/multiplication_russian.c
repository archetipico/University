// T = Θ(log b), S = Θ(1)

#include <stdio.h>

int mult_russian(int a, int b);

int main( void ) {
    int a = 0;
    int b = 0;

    printf("Insert two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d", mult_russian(a, b));
}

/* Russian multiplication: b is divided by 2,
a is doubled. If b is odd, add a to the product */
int mult_russian(int a, int b) {
    int res = 0;

    while (b > 0) {
        if (b % 2 != 0) {
            res += a;
        }

        b /= 2;
        a *= 2;
    }

    return res;
}
