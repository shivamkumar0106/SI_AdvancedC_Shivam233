#include <stdio.h>

int main() {
    char a[6] = "hello";
    int i, j, count;

    for (i = 0; a[i] != '\0'; i++) {

        count = 1;

        if (a[i] == '*')
            continue;

        for (j = i + 1; a[j] != '\0'; j++) {

            if (a[i] == a[j]) {
                count++;
                a[j] = '*';
            }
        }

        printf("%c = %d\n", a[i], count);
    }

    return 0;
}