#include <stdio.h>

int main() {
    int a[100], b[100], n;
    int *p, *q;

    scanf("%d", &n);

    p = a;
    q = b;

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for (int i = 0; i < n; i++) {
        *(q + i) = *(p + i);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(q + i));
    }

    return 0;
}