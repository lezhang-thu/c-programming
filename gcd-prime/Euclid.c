#include <stdbool.h>

/* The inputs a and b are arbitrary nonnegative integers - 非负整数 */
int Euclid(int a, int b) {
    if (b == 0)
        return a;
    else
        return Euclid(b, a % b);
}
