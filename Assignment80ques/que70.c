#include <stdio.h>

void reverse(char a[], int i) {

    if (a[i] == '\0')
        return;

    reverse(a, i + 1);

    printf("%c", a[i]);
}

int main() {
    char a[100] = "Hello World";

    printf("Reversed sentence: ");
    reverse(a, 0);

    return 0;
}