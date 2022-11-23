#include <stdio.h>
#include <stdlib.h>

int *get_array(void) {
    // int a[20];
    int *a = (int *)malloc(sizeof(int) * 20);
    int k;
    for (k = 0; k < 20; k++) a[k] = k;
    return a;
}

int main(void) {
    int *a = get_array();
    int k;
    for (k = 0; k < 20; k++) printf("%d ", a[k]);
    printf("\n");
    return 1;
}
