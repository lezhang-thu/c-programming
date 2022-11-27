#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE *fp;
    char str[80];
    if ((fp = fopen("demo.txt", "w")) == NULL) {
        exit(0);
    }
    // gets(str);
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);
    return 0;
}
