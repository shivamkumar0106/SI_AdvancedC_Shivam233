#include <stdio.h>

int main() {
    char a[] = "Hello World";
    char b[sizeof(a)];
    int i;

    for (i = 0; a[i] != '\0'; i++) {
        b[i] = a[i];
    }

    b[i] = '\0';

    printf("Source string: %s\n", a);
    printf("Copied string: %s\n", b);

    return 0;
}