#include <stdio.h>
#include <stdlib.h>

struct d_array {
    int *array;
    int length;
};
typedef struct d_array DArray;

DArray create(int);
void grow(DArray *, int);
void print(DArray *);
void release(DArray *);

DArray create(int n) {
    DArray a;
    int i;
    a.array = (int *)malloc(sizeof(int) * n);
    if (a.array == NULL) {
        printf("Allocation Error");
        exit(0);
    } else {
        a.length = n;
        for (i = 0; i < a.length; i++) scanf("%d", &a.array[i]);
    }
    return a;
}

void grow(DArray *aPtr, int n) {
    int *p;
    int i;
    // p = (int *)malloc(sizeof(int) * n);
    p = (int *)realloc(aPtr->array, sizeof(int) * n);
    if (p == NULL)
        return;
    else {
        // for (i = 0; i < aPtr->length; i++) p[i] = aPtr->array[i];
        for (i = aPtr->length; i < n; i++) scanf("%d", &p[i]);
        // free(aPtr->array);
        aPtr->array = p;
        aPtr->length = n;
    }
}

void print(DArray *p) {
    int i;
    for (i = 0; i < p->length; i++) printf("%d ", p->array[i]);
    printf("\n");
}

void release(DArray *p) { free(p->array); }

int main(void) {
    int n;
    DArray a;
    scanf("%d", &n);
    a = create(n);
    print(&a);
    grow(&a, n * 2);
    print(&a);
    release(&a);
    return 0;
}
