#include <stdio.h>

int swap(int n) {
    int d2 = 1;
    int m = n;
    while (m / 10 > 0) {
        m = m / 10;
        d2 *= 10;
    }
    return n - m * d2 - (n % 10) + (n % 10) * d2 + m;
}

int main(void) {
    int n;
    scanf("%d", &n);
    n = swap(n);
    printf("%d\n", n);
    return 0;
}
