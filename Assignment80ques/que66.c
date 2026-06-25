#include <stdio.h>

void callByValue(int x) {
    x = x + 10;
    printf("Inside Call by Value: %d\n", x);
}

void callByReference(int *x) {
    *x = *x + 10;
    printf("Inside Call by Reference: %d\n", *x);
}

int main() {
    int n = 20;

    printf("Before Call by Value: %d\n", n);
    callByValue(n);
    printf("After Call by Value: %d\n\n", n);

    printf("Before Call by Reference: %d\n", n);
    callByReference(&n);
    printf("After Call by Reference: %d\n", n);

    return 0;
}