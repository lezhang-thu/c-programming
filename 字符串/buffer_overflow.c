#include <stdio.h>
#include <string.h>

int main() {
    char password[8] = "secret", input[8];
    int i;
    while (1) {
        printf("Enter your password: ");
        fgets(input, sizeof(input), stdin);
        fflush(stdin);
        for (i = 0; input[i] != '\n' && i < sizeof(input) - 1; i++) {
            ;
        }
        input[i] = '\0';
        if (strcmp(input, password) == 0) {
            printf("Welcome!\n");
            break;
        } else {
            printf("Sorry!\n");
        }
    }
    return 0;
}

/*int main() {
    char password[8] = "secret", input[8];
    while (1) {
        printf("Enter your password: ");
        fgets(input, sizeof(input), stdin);
        // scanf("%7s", input);
        // gets(input);
        fflush(stdin);
        if (strcmp(input, password) == 0) {
            printf("Welcome!\n");
            break;
        } else {
            printf("Sorry!\n");
        }
    }
    return 0;
}*/
