
#include <stdio.h>
#include <string.h>
#define N 80

char frequent(char *s) {
    char t[N];
    int times[N];
    memset(times, 0, sizeof(times));

    int n = 0, i;
    while (*s) {
        for (i = 0; i < n; i++)
            if (*s == t[i]) break;
        if (i < n)
            times[i]++;
        else {
            t[n++] = *s;
            times[n - 1] = 1;
        }
        s++;
    }

    int k = 0;
    for (i = 1; i < n; i++)
        if (times[i] > times[k]) k = i;
    return t[k];
}

int main(void) {
    char s[N + 1];
    gets(s);

    printf("%c\n", frequent(s));
    return 0;
}
