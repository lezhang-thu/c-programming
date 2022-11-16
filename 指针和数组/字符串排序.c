#include <stdio.h>
#include <string.h>
#define M 150 /* 最多的字符串个数 */
#define N 50
void SortString(char *ptr[], int n);
void SortString(char *ptr[], int n) {
    int i, j;
    char *temp = NULL;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(ptr[j], ptr[i]) < 0) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
int main() {
    int i, n;
    char *pStr[M];
    printf("How many countries?\n");
    scanf("%d", &n);
    getchar(); /* 读走输入缓冲区中的回车符 */
    printf("Input their names:\n");
    for (i = 0; i < n; i++) {
        gets(pStr[i]); /* 输入n个字符串 */
    }
    SortString(pStr, n); /* 字符串按字典顺序排序 */
    printf("Sorted results:\n");
    for (i = 0; i < n; i++) {
        puts(pStr[i]); /* 输出排序后的n个字符串 */
    }
    return 0;
}
