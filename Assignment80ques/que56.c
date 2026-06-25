#include <stdio.h>

int main() {
    char a[50] = "Hello";
    char b[] = "World";

    int i = 0, j = 0;

    while (a[i] != '\0') {
        i++;
    }

    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';

    printf("Concatenated string: %s\n", a);

    return 0;
}