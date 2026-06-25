#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;

    printf("Enter range: ");
    scanf("%d", &num);

    printf("Prime numbers from 1 to %d are:\n", num);

    for (int n = 2; n <= num; n++) {
        bool indi = true;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                indi = false;
                break;
            }
        }

        if (indi) {
            printf("%d ", n);
        }
    }

    return 0;
}