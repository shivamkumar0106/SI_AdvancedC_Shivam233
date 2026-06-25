#include <stdio.h>

int main() {
    int a[100], n, key, found = 0;
    int *p;

    scanf("%d", &n);

    p = a;

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (*(p + i) == key) {
            printf("Found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Not found");
    }

    return 0;
}