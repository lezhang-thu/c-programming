#include <stdio.h>
#include <stdlib.h>

#define N 100

struct STU {
    int xh;
    char name[20];
    float mark;
};

void ord_stu(struct STU a[], int stu_num) {
    // Please fill this blank
    int i, j;
    int n = stu_num;
    for (i = 0; i < n - 1; i++) {
        int k = i;
        for (j = i + 1; j < n; j++)
            if (a[j].mark > a[k].mark) k = j;
        if (k != i) {
            struct STU t;
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
    }
}
void tofile(struct STU a[], int stu_num, char* f) {
    FILE* fp;
    if ((fp = fopen(f, "wb")) == NULL) {
        exit(0);
    }
    fwrite(&stu_num, sizeof(int), 1, fp);
    fwrite(a, sizeof(struct STU), stu_num, fp);
    fclose(fp);
}

void fromfile(char* f) {
    FILE* fp;
    if ((fp = fopen(f, "rb")) == NULL) {
        exit(0);
    }

    int n;
    fread(&n, sizeof(int), 1, fp);
    struct STU* t = (struct STU*)malloc(sizeof(struct STU));
    int k;
    for (k = 0; k < n; k++) {
        fread(t, sizeof(struct STU), 1, fp);
        printf("%10d%20s%8.1f\n", t->xh, t->name, t->mark);
    }
    fclose(fp);
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
    tofile(a, n, "demo.txt");
    fromfile("demo.txt");
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
