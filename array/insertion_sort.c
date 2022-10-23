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

int main(void) {
    int a[] = {5, 2, 4, 6, 1, 3};
    insertion_sort(a, 6);

    int k;
    for (k = 0; k < 6; k++) printf("%d ", a[k]);
    printf("\n");
}
