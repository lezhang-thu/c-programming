#include <stdio.h>
#define N 100

struct STU {
    int xh;
    char name[20];
    float mark;
};

void ord_stu(struct STU a[], int stu_num) {
    // Please fill this blank
    int i, j;
    for (i = 0; i < stu_num - 1; i++)
        for (j = i + 1; j < stu_num; j++) {
            if (a[j].mark > a[i].mark) {
                struct STU x = a[j];
                a[j] = a[i];
                a[i] = x;
            }
        }
}
void prt_stu(struct STU a[], int stu_num) {
    // Please fill this blank
    int k;
    for (k = 0; k < stu_num; k++) {
        printf("%10d%20s%8.1f\n", a[k].xh, a[k].name, a[k].mark);
    }
}

void init_stu(struct STU* p, int n) {
    int k;
    for (k = 0; k < n; k++) {
        scanf("%d%s%f", &p[k].xh, p[k].name, &p[k].mark);
    }
}

int main(void) {
    struct STU a[N];
    int n;
    scanf("%d", &n);
    getchar();
    init_stu(a, n);
    ord_stu(a, n);
    prt_stu(a, n);
}

/*
输入：
5
20181001 zhangxiaoming 87
20181002 zhangxi 92
20181003 wangxiaoming 68
20181004 chenxi 93.5
20181004 xugang 73
输出：
  20181004              chenxi    93.5
  20181002             zhangxi    92.0
  20181001       zhangxiaoming    87.0
  20181004              xugang    73.0
  20181003        wangxiaoming    68.0
*/
