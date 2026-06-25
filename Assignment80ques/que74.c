#include <stdio.h>

int main() {
    int a[100], n;
    int *p;
    int low, mid, high, temp;

    scanf("%d", &n);

    p = a;

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    low = 0;
    mid = 0;
    high = n - 1;

    while (mid <= high) {
        if (*(p + mid) == 0) {
            temp = *(p + low);
            *(p + low) = *(p + mid);
            *(p + mid) = temp;

            low++;
            mid++;
        }
        else if (*(p + mid) == 1) {
            mid++;
        }
        else {
            temp = *(p + mid);
            *(p + mid) = *(p + high);
            *(p + high) = temp;

            high--;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}