#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

typedef enum { U, D, L, R } direction;

int main( void ) {
    char plane[N][N];
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            plane[i][j] = '.';
        }
    }

    char val = 'A';

    int doneU = 0;
    int doneD = 0;
    int doneL = 0;
    int doneR = 0;

    int i = 0;
    int j = 0;
    plane[i][j] = val;

    while (val < 'Z' && !(doneU && doneD && doneL && doneR)) {
        direction dir = rand() % 4;
        
        switch (dir) {
            case U:
                if (i == 0 || plane[i-1][j] != '.') {
                    doneU = 1;
                    break;
                } else {
                    val++;
                    i--;
                    plane[i][j] = val;

                    doneU = 0;
                    doneD = 0;
                    doneL = 0;
                    doneR = 0;
                    
                    break;
                }

            case D:
                if (i == N - 1 || plane[i+1][j] != '.') {
                    doneD = 1;
                    break;
                } else {
                    val++;
                    i++;
                    plane[i][j] = val;

                    doneU = 0;
                    doneD = 0;
                    doneL = 0;
                    doneR = 0;

                    break;
                }

            case L:
                if (j == 0 || plane[i][j-1] != '.') {
                    doneL = 1;
                    break;
                } else {
                    val++;
                    j--;
                    plane[i][j] = val;

                    doneU = 0;
                    doneD = 0;
                    doneL = 0;
                    doneR = 0;

                    break;
                }

            case R:
                if (j == N - 1 || plane[i][j+1] != '.') {
                    doneR = 1;
                    break;
                } else {
                    val++;
                    j++;
                    plane[i][j] = val;

                    doneU = 0;
                    doneD = 0;
                    doneL = 0;
                    doneR = 0;

                    break;
                }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", plane[i][j]);
        }

        printf("\n");
    }

    return 0;
}