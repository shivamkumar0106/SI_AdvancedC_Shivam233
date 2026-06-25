#include <stdio.h>

int main() {
    int a[100], n, sum = 0, total, missing;
    int *p;

    scanf("%d", &n);

    p = a;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", p + i);
        sum = sum + *(p + i);
    }

    total = (n * (n + 1)) / 2;
    missing = total - sum;

    printf("%d", missing);

    return 0;
}