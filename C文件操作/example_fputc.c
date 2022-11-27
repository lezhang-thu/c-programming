#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    int ch;
    if ((fp = fopen("demo.txt", "w")) == NULL) {
        exit(0);
    }
    ch = getchar();
    while (ch != '\n') {
        fputc(ch, fp);
        ch = getchar();
    }
    fclose(fp);
    return 0;
}
