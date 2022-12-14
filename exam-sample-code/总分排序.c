#include <stdio.h>
#define N 100

struct STU {
    int xh;
    char name[20];
    int mark[3];
};

void ord_stu(struct STU a[], int stu_num) {
    // Please fill this blank
    int i, j;
    int n = stu_num;
    for (i = 0; i < n - 1; i++) {
        int k = i;
        for (j = i + 1; j < n; j++) {
            int f_k = a[k].mark[0] + a[k].mark[1] + a[k].mark[2];
            int f_j = a[j].mark[0] + a[j].mark[1] + a[j].mark[2];
            if (f_j > f_k || (f_j == f_k && a[j].xh < a[k].xh)) k = j;
        }
        if (k != i) {
            struct STU t;
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
}
void prt_stu(struct STU a[], int stu_num) {
    // Please fill this blank
    int k;
    for (k = 0; k < stu_num; k++) {
        int f = a[k].mark[0] + a[k].mark[1] + a[k].mark[2];
        printf("%10d%20s%8d\n", a[k].xh, a[k].name, f);
    }
}

void init_stu(struct STU* p, int n) {
    int k;
    for (k = 0; k < n; k++) {
        scanf("%d%s%d%d%d", &p[k].xh, p[k].name, &p[k].mark[0], &p[k].mark[1],
              &p[k].mark[2]);
    }
}

int main(void) {
    struct STU a[N];
    int n;
    scanf("%d", &n);
    fflush(stdin);
    init_stu(a, n);
    ord_stu(a, n);
    prt_stu(a, n);
}
