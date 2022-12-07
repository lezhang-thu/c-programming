// mathDemo.c
#include "mymath.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  int x, y;
  printf("Enter two numbers\n");
  scanf("%d %d", &x, &y);

  printf("%d + %d = %d\n", x, y, add(x, y));
  printf("%d - %d = %d\n", x, y, sub(x, y));
  printf("%d * %d = %d\n", x, y, mult(x, y));
}
