#include <stdio.h>

int main() {
    int x, y;
    int *p, *q, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    p = &x;
    q = &y;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}