#include <stdio.h>

int main( void ) {
    char start, end;
    printf("Inser two chars: ");
    scanf("%c %c", &start, &end);

    if ( start < end ) {
        printf("%d", end - start + 1);
    } else {
        printf("%d", start - end + 1);
    }

    return 0;
}