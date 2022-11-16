#include <stdio.h>

/*void f(int a[], int n) {
    printf("%lu\n", sizeof(a));
}*/

int main(void) {
    int a[10];
    int *p = NULL;
    p = a;

    printf("%lu %lu\n", sizeof(a), sizeof(p));
    // f(a, 10);
    return 0;
}
