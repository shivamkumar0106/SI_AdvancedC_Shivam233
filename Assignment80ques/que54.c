#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    printf("Length of string: %d", i);

    return 0;
}