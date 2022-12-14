#include <stdio.h>

int min_delta() {
    int x, y;

    scanf("%d %d", &x, &y);
    int delta = y - x;
    if (delta < 0) delta = -delta;

    int z;
    scanf("%d", &z);
    while (z != -1) {
        x = y;
        y = z;
        int delta_x = y - x;
        if (delta_x < 0) delta_x = -delta_x;
        if (delta_x < delta) delta = delta_x;
        scanf("%d", &z);
    }
    return delta;
}

int main(void) {
    printf("%d\n", min_delta());
    return 0;
}
