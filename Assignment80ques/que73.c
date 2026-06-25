#include <stdio.h>

int main() {
    int a[100], n, key;
    int *p;
    int first = -1, last = -1;

    scanf("%d", &n);

    p = a;

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (*(p + i) == key) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    if (first == -1) {
        printf("Not found");
    } else {
        printf("First position: %d\n", first + 1);
        printf("Last position: %d\n", last + 1);
    }

    return 0;
}