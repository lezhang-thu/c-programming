#include <stdio.h>

int main(void) {
    int a[10];
    int *p = NULL;
    p = a;

    printf("%lu %lu\n", sizeof(a), sizeof(p));
}
