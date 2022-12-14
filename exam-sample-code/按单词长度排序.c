#include <stdio.h>
#include <string.h>

#define N 20
#define M 80

void sort_string(char s[][M + 1], int n) {
    char t[M + 1];
    int i, j;
    for (i = 0; i < n - 1; i++) {
        int k = i;
        for (j = i + 1; j < n; j++)
            if (strlen(s[k]) > strlen(s[j])) k = j;
        if (k != i) {
            strcpy(t, s[k]);
            strcpy(s[k], s[i]);
            strcpy(s[i], t);
        }
    }
}

void output_string(char s[][M + 1], int n) {
    int k;
    for (k = 0; k < n; k++) puts(s[k]);
}

int main(void) {
    char s[N + 1][M + 1];
    int n = 0;
    gets(s[n]);
    while (s[n][0] != '#') {
        n++;
        gets(s[n]);
    }
    sort_string(s, n);
    output_string(s, n);
    return 0;
}
