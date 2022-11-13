#include <stdio.h>
#include <string.h>
#define N 10

void InputArray(int *p, int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &p[i * n + j]);
        }
    }
}

void OutputArray(int *p, int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", p[i * n + j]);
        }
        printf("\n");
    }
}

void OutputArray2(int a[][N], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int a[N][N];
    /*
1  2  3  4
5  6  7  8
9 10 11 12
    */

    memset(a, 0, sizeof(int) * N * N);
    InputArray(*a, 3, 4);
    printf("***\n");
    OutputArray(*a, 3, 4);
    printf("***\n");
    OutputArray2(a, 3, 4);
    return 0;
}
