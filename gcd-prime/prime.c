#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
    if (n <= 1) return false;

    int k, m = (int)sqrt(n);
    for (k = 2; k <= m; k++)
        if (n % k == 0) return false;
    return true;
}

int main(void) {
    int n = 90;
    // int n = 23;
    int k;
    bool f = false;
    printf("%d = ", n);
    for (k = 1; k <= n; k++)
        if (isPrime(k) && n % k == 0) {
            if (f) {
                printf(" x ");
            }
            f = true;
            printf("%d", k);
            n /= k;
        }
    printf("\n");
    return 0;
}
