#include <stdio.h>

int main() {
    int a[100], n;
    int *p, *q, temp;

    scanf("%d", &n);

    p = a;

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    q = p + n - 1;

    for (int i = 0; i < n / 2; i++) {
        temp = *(p + i);
        *(p + i) = *(q - i);
        *(q - i) = temp;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}