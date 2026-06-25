#include <stdio.h>

int main() {
    int a, b, sum;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    sum = *p + *q;

    printf("Sum = %d\n", sum);

    return 0;
}