#include <stdio.h>

#include "sum.h"

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, sumOfTwoNumbersGeZero(a, b));
    return 0;
}
