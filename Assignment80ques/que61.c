#include <stdio.h>

int main() {
    char a[100] = "HeLLo WoRLD";
    char lower[100], upper[100];
    int i = 0;

    while (a[i] != '\0') {
        lower[i] = a[i];
        upper[i] = a[i];

        if (lower[i] >= 'A' && lower[i] <= 'Z') {
            lower[i] = lower[i] + 32;
        }

        if (upper[i] >= 'a' && upper[i] <= 'z') {
            upper[i] = upper[i] - 32;
        }

        i++;
    }

    lower[i] = '\0';
    upper[i] = '\0';

    printf("Original: %s\n", a);
    printf("Lowercase: %s\n", lower);
    printf("Uppercase: %s\n", upper);

    return 0;
}