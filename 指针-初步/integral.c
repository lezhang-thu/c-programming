#include <stdio.h>

float Integral(float (*f)(float), float a, float b) {
    float s, h;
    int n = 100, i;
    s = ((*f)(a) + (*f)(b)) / 2;
    h = (b - a) / n;
    for (i = 1; i < n; i++) {
        s = s + (*f)(a + i * h);
    }
    return s * h;
}

float func(float x) { return 1 + x * x; }

int main(void) {
    printf("%f\n", Integral(func, 0, 3));
    return 0;
}
