#include <stdio.h>
#include <stdlib.h>
#define N (1024 * 1024)

int main(void)
{
    /*int x[N];
    printf("%lu\n", sizeof(x));
    x[N - 1] = 100;
    printf("%d\n", x[N - 1]);*/
    int* y = (int*)malloc(sizeof(int) * N);
    printf("%lu\n", sizeof(y));
    y[N - 1] = 100;
    printf("%d\n", y[N - 1]);
    free(y);
    return 0;
}

