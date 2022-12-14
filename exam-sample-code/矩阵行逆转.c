#include <stdio.h>
#define N 10

void input_matrix(int matrix[][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) scanf("%d", &matrix[i][j]);
}

void flip_matrix(int matrix[][N], int n, int m) {
    int i;
    for (i = 0; i < n; i++) {
        int s = 0, t = m - 1;
        while (s < t) {
            int x = matrix[i][s];
            matrix[i][s] = matrix[i][t];
            matrix[i][t] = x;
            s++;
            t--;
        }
    }
}

void output_matrix(int matrix[][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", matrix[i][j]);
            if (j < m - 1) printf(" ");
        }
        printf("\n");
    }
}
int main(void) {
    int n, m;
    int matrix[N][N];

    scanf("%d %d", &n, &m);
    input_matrix(matrix, n, m);
    flip_matrix(matrix, n, m);
    output_matrix(matrix, n, m);
    return 0;
}
