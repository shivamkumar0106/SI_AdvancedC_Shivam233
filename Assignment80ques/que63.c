#include <stdio.h>

int main() {
    char a[15] = "H3llo@ W0rld!";
    int i, j = 0;

    for (i = 0; a[i] != '\0'; i++) {

        if ((a[i] >= 'A' && a[i] <= 'Z') ||
            (a[i] >= 'a' && a[i] <= 'z')) {

            a[j] = a[i];
            j++;
        }
    }

    a[j] = '\0';

    printf("String after removing non-alphabets: %s\n", a);

    return 0;
}