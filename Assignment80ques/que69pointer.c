#include <stdio.h>

int main() {
    int a[100], b[100], temp;
    int *p, *q;
    int n;

    p = a;
    q = b;

    n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", q + i);
    }

    for (int i = 0; i < n; i++) {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", *(q + i));
    }

    return 0;
}