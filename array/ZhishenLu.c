#include <stdio.h>
#include <string.h>

int main(void) {
    int period = 5;
    int a[100];
    memset(a, 0, sizeof(int) * 100);
    int k;
    /*for (k=0; k<100; k++)
        printf("%d ", a[k]);
    printf("\n");*/
    int start = 0;
    int out = -1;
    for (k = 0; k < 100; k++) {
        int j;
        for (j = 0; j < 5; j++) {
            while (a[start] != 0) start = (start + 1) % 100;
            if (j == 4) {
                out = start + 1;
                a[start] = -1;
            }
            start = (start + 1) % 100;
        }
    }
    printf("%d\n", out);
    return 0;
}
