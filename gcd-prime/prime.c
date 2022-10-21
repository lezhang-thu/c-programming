#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;

    int k, m = (int)sqrt(n);
    for (k = 2; k <= m; k++)
        if (n % k == 0) return false;
    return true;
}
