#include <stdio.h>
#define N 81
#define M 21

void most_e(char s[][N], int m) {
    int max = -1;
    int i;
    for (i = 0; i < m; i++) {
        int counter = 0;
        char *p = s[i];
        while (*p != '\0') {
            if (*p == 'e') counter++;
            p++;
        }
        if (counter > max) max = counter;
    }

    for (i = 0; i < m; i++) {
        int counter = 0;
        char *p = s[i];
        while (*p != '\0') {
            if (*p == 'e') counter++;
            p++;
        }
        if (counter == max) {
            printf("%s\n", s[i]);
        }
    }
}

int main(void) {
    char s[M][N];

    int m = 0;
    scanf("%s", s[m]);
    while (s[m][0] != '#') {
        m++;
        scanf("%s", s[m]);
    }
    most_e(s, m);
    return 0;
}
