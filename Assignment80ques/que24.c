#include <stdio.h>

int main() {
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp = num; temp > 0; temp /= 10) {
        rem = temp % 10;
        sum += rem * rem * rem;
    }

    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is NOT an Armstrong number\n", num);
    }

    return 0;
}