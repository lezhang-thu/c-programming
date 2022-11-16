#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define N 100

bool symmetric(char *s) {
    int n = strlen(s);
    int i = 0, j = n - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main(void) {
   char s[N + 1];
   gets(s);

   bool x = symmetric(s);
   if (x) printf("Yes\n");
   else printf("No\n");
}
