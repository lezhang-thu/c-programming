#include <stdio.h>

void insertion_sort(int *a, int n) {
    int i, j;
    for (j = 1; j < n; j++) {
        int key = a[j];

        i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
}

void bubble_sort(int *a, int n) {
    int i, j, t;
    // n - 1: #times to bubble out
    for (i = 0; i < n - 1; i++)
        for (j = 1; j < n - i; j++)
            if (a[j] < a[j - 1]) {
                t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
}

int main(void) {
    int a[] = {5, 2, 4, 6, 1, 3};
    // insertion_sort(a, 6);
    bubble_sort(a, 6);

    int k;
    for (k = 0; k < 6; k++) printf("%d ", a[k]);
    printf("\n");
}
