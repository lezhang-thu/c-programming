#include <stdio.h>
#include <stdlib.h>

struct PolyNode {
    int coefficient, power;
    struct PolyNode *next;
};

struct PolyNode *addPoly(struct PolyNode *poly1, struct PolyNode *poly2) {
    struct PolyNode *temp, *cur, *x;
    temp = (struct PolyNode *)malloc(sizeof(struct PolyNode));
    temp->next = NULL;
    cur = temp;
    while (poly1 && poly2) {
        if (poly1->power > poly2->power) {
            cur->next = poly1;
            cur = cur->next;
            poly1 = poly1->next;
        } else if (poly1->power < poly2->power) {
            cur->next = poly2;
            cur = cur->next;
            poly2 = poly2->next;
        } else {
            int sum = poly1->coefficient + poly2->coefficient;
            if (sum) {
                poly1->coefficient += poly2->coefficient;
                cur->next = poly1;
                cur = cur->next;
            } else {
                x = poly1;
            }
            poly1 = poly1->next;
            if (!sum) free(x);

            x = poly2;
            poly2 = poly2->next;
            free(x);
        }
    }
    if (poly1)
        cur->next = poly1;
    else
        cur->next = poly2;
    x = temp->next;
    free(temp);
    return x;
}

struct PolyNode *create(int poly[][2], int n) {
    struct PolyNode *h = (struct PolyNode *)malloc(sizeof(struct PolyNode));
    h->next = NULL;
    struct PolyNode *t;
    int k;
    for (k = 0; k < n; k++) {
        t = (struct PolyNode *)malloc(sizeof(struct PolyNode));
        t->coefficient = poly[n - 1 - k][0];
        t->power = poly[n - 1 - k][1];
        t->next = h->next;
        h->next = t;
    }
    t = h->next;
    free(h);
    return t;
}

int main(void) {
    int poly1[][2] = {{2, 2}, {4, 1}, {3, 0}};
    int poly2[][2] = {{3, 2}, {-4, 1}, {-1, 0}};

    /* struct PolyNode *t = create(poly1, 3);
    while (t) {
        printf("[%d, %d] ", t->coefficient, t->power);
        t = t->next;
    }
    printf("\n");

    return 0;*/

    struct PolyNode *t = addPoly(create(poly1, 3), create(poly2, 3));
    while (t) {
        printf("[%d, %d] ", t->coefficient, t->power);
        t = t->next;
    }
    printf("\n");

    return 0;
}
