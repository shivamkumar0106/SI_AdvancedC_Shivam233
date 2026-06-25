#include <stdio.h>

int main() {
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp = num; temp > 0; temp /= 10) {
        rem = temp % 10;

        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }

        sum += fact;
    }

    if (sum == num) {
        printf("%d is a Strong Number\n", num);
    } else {
        printf("%d is NOT a Strong Number\n", num);
    }

    return 0;
}