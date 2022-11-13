#include <stdio.h>
#include <string.h>
#define N 80

void longest_word(char *s) {
    int len = 0, max = 0;
    char *start = NULL, *ret = NULL;
    // 有限状态自动机：0为非字母区间，1为字母区间
    int flag = 0;
    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            if (!flag) {
                start = s;
                len = 0;
            }
            len++;
            flag = 1;
        } else {
            flag = 0;
        }
        if (len > max) {
            max = len;
            ret = start;
        }
        s++;
    }

    char t[N + 1];
    strncpy(t, ret, max);
    t[max] = '\0';
    printf("%s\n", t);
}

int main(void) {
    char s[N + 1];
    gets(s);

    longest_word(s);
    return 0;
}
