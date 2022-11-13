#include <stdio.h>
#define STR_LEN 80

void char_pointer(void) {
    char s[STR_LEN];
    char *ptr = s;
    printf("Input a string: ");
    gets(ptr);
    printf("%s\n", ptr);

    /*char str[STR_LEN+1];
    char *ptr = str;
    printf("Input a string: ");
    gets(ptr);
    printf("%s\n", ptr);*/
}
int main() {
    char_pointer();
    return 0;
}
