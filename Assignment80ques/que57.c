#include <stdio.h>

int main() {
    char a[] = "Hello";
    char b[] = "Hello";

    int i;

    for (i = 0; a[i] == b[i]; i++) {
        if (a[i] == '\0') {
            break;
        }
    }

    if (a[i] == b[i])
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}