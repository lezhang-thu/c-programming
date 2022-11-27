#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    /* **int** ch, not char ch */
    int ch;
    if ((fp = fopen("demo.txt", "r")) == NULL) {
        exit(0);
    }
    /*while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }*/

    // feof - start
    ch = fgetc(fp);
    while (!feof(fp)) {
        putchar(ch);
        ch = fgetc(fp);
    }
    // feof - end

    fclose(fp);
    return 0;
}
