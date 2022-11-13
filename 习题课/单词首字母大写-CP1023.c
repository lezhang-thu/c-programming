#include <stdio.h>
#include <string.h>
#define N 80

void capital(char *s) {
    // 有限状态自动机：0为非字母区间，1为字母区间
    int flag = 0;
    while (*s) {
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')) {
            if (!flag && (*s >= 'a' && *s <= 'z')) *s = *s - 'a' + 'A';
            flag = 1;
        } else {
            flag = 0;
        }

        s++;
    }
}

int main(void) {
    char s[N + 1];
    gets(s);

    capital(s);
    printf("%s\n", s);
    return 0;
}
