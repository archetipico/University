#include <time.h>
#include <stdio.h>

int main( void ) {
    time_t start, end;
    start = clock();

    int stop;
    printf("Write something to stop: ");
    scanf("%d", &stop);
    end = clock();

    printf("%I64d", (end - start) / CLOCKS_PER_SEC);

    return 0;
}