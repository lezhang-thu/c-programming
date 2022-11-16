#include <stdbool.h>
#include <stdio.h>
#define N 20

void input(int a[][N], int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
}

int num_maximal(int a[][N], int n) {
    int d[][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};

    int counter = 0;
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            int k;
            for (k = 0; k < 4; k++) {
                int ii = i + d[k][0], jj = j + d[k][1];
                if ((ii >= 0 && ii < n) && (jj >= 0 && jj < n) &&
                    a[ii][jj] > a[i][j])
                    break;
            }
            if (k == 4) counter++;
        }
    return counter;
}
int main(void) {
    int a[N][N];

    int n;
    scanf("%d", &n);
    input(a, n);

    int m = num_maximal(a, n);
    printf("%d\n", m);
}
