#include <stdio.h>
#include <stdbool.h>

int main() {
    char a[6] = "madam";
    int i, j, len = 0;
    bool indi = true;

    for (i = 0; a[i] != '\0'; i++) {
        len++;
    }

    i = 0;
    j = len - 1;

    while (i < j) {
        if (a[i] != a[j]) {
            indi = false;
            break;
        }
        i++;
        j--;
    }

    if (indi)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}