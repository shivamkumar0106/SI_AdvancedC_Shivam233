#include <stdio.h>

int main() {
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp = num; temp > 0; temp /= 10) {
        rem = temp % 10;
        sum += rem;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}