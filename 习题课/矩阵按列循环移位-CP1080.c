#include <stdio.h>

#define N 10

void input_array(int a[][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++) scanf("%d", &a[i][j]);
}

void output_array(int a[][N], int n, int m) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", a[i][j]);
            if (j < m - 1) printf(" ");
        }
        printf("\n");
    }
}

void reverse(int a[][N], int i, int j, int n) {
    while (i < j) {
        int k;
        for (k = 0; k < n; k++) {
            int x = a[k][i];
            a[k][i] = a[k][j];
            a[k][j] = x;
        }
        i++;
        j--;
    }
}

void shift(int a[][N], int n, int m, int t) {
    reverse(a, 0, m - t - 1, n);
    reverse(a, m - t, m - 1, n);
    reverse(a, 0, m - 1, n);
}

int main(void) {
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);
    int a[N][N];
    input_array(a, n, m);

    shift(a, n, m, t);
    output_array(a, n, m);
}
