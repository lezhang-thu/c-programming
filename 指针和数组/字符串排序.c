#include <stdio.h>
#include <string.h>
#define M 150 /* 最多的字符串个数 */
#define N 50

/*void SortString(char str[][N], int n);
void SortString(char str[][N], int n) {
    int i, j;
    char temp[N];
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[j], str[i]) < 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}*/

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
    char str[M][N];
    printf("How many countries?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) pStr[i] = str[i];

    // getchar(); /* 读走输入缓冲区中的回车符 */
    fflush(stdin);
    printf("Input their names:\n");
    for (i = 0; i < n; i++) {
        gets(pStr[i]); /* 输入n个字符串 */
    }
    SortString(pStr, n); /* 字符串按字典顺序排序 */
    printf("******\n");
    printf("Sorted results:\n");
    for (i = 0; i < n; i++) {
        puts(pStr[i]); /* 输出排序后的n个字符串 */
    }
    printf("******\n");
    for (i = 0; i < n; i++) {
        puts(str[i]); /* 输出排序后的n个字符串 */
    }
    return 0;
}
