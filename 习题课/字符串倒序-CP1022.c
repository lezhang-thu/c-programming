#include <stdio.h>
#include <string.h>
#define N 80

void reverse(char* s) {
    int n = strlen(s);
    int i = 0, j = n - 1;
    while (i < j) {
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
}
int main(void) {
    char s[N + 1];
    gets(s);

    reverse(s);
    printf("%s\n", s);
    return 0;
}
