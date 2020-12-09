#include <stdio.h>

int mult_by_sum(int a, int b);

int main( void ) {
    int a = 0;
    int b = 0;

    printf("Insert two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d", mult_by_sum(a, b));
}

/* Multiplying using sums */
int mult_by_sum(int a, int b) {
    int res = 0;

    while (b > 0) {
        res += a;
        b--;
    }

    return res;
}