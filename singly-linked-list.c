//导入 stdbool.h 来使用布尔类型
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool insert(struct ListNode *L, int X, int i) { /* 这里默认L有头结点 */
    struct ListNode *t, *pre;
    int idx = -1;
    /* 查找位序为i - 1的结点 */
    pre = L; /* pre指向表头 */
    while (pre && idx < i - 1) {
        pre = pre->next;
        idx++;
    }
    if (pre == NULL) { /* 所找结点不在L中 */
        printf("插入位置参数错误\n");
        return false;
    } else { /* 找到了待插结点的前一个结点pre；若i为0，pre就指向表头 */
        /* 插入新结点 */
        t = (struct ListNode *)malloc(
            sizeof(struct ListNode)); /*申请、填装结点*/
        t->val = X;
        t->next = pre->next;
        pre->next = t;
        return true;
    }
}

bool delete (struct ListNode *L, int i) { /* 这里默认L有头结点 */
    struct ListNode *t, *pre;
    int idx = -1;
    /* 查找位序为i-1的结点 */
    pre = L; /* pre指向表头 */
    while (pre && idx < i - 1) {
        pre = pre->next;
        idx++;
    }
    if (pre == NULL || idx != i - 1 || pre->next == NULL) {
        /* 所找结点或位序为i的结点不在L中 */
        printf("删除位置参数错误\n");
        return false;
    } else { /* 找到了待删结点的前一个结点pre */
        /* 将结点删除 */
        t = pre->next;
        pre->next = t->next;
        free(t);
        return true;
    }
}

void printOut(struct ListNode *L) {
    struct ListNode *p = L->next;
    while (p) {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
}

void create(struct ListNode *L, int X) {
    struct ListNode *t = (struct ListNode *)malloc(sizeof(struct ListNode));
    t->val = X;
    t->next = L->next;
    L->next = t;
}

int main(void) {
    struct ListNode *L = (struct ListNode *)malloc(sizeof(struct ListNode));
    L->next = NULL;

    int a[] = {5, 10, 21, 35, 11};
    int k;
    for (k = 0; k < 5; k++) create(L, a[4 - k]);
    printOut(L);

    insert(L, 4, 3);
    printOut(L);
    return 0;
}
