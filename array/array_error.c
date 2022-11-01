#include <stdio.h>
int main(void) {
    int i, j;
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)  //越界访问
    {
        for (j = 0; j < 2; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
