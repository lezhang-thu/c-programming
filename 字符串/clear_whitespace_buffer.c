#include <stdio.h>
#define STR_LEN 80
int main() {
    char str[STR_LEN + 1], ch;
    printf("Input a string: ");
    scanf("%s", str);
    printf("%s\n", str);
    printf("Input a character: ");
    /*getchar();
    ch = getchar();*/
    /*scanf(" ");
    scanf("%c", &ch);*/
    scanf(" %c", &ch);
    /*fflush(stdin);
    ch = getchar();*/
    printf("%c\n", ch);
    return 0;
}
