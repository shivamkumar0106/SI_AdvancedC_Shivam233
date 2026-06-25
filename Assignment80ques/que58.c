#include <stdio.h>

int main() {
    char a[100] = "Hello World";
    int i, j, len = 0;
    char temp;

    for (i = 0; a[i] != '\0'; i++) {
        len++;
    }

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reversed string: %s\n", a);

    return 0;
}