#include <stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (rev == num) {
        printf("%d is a Palindrome\n", num);
    } else {
        printf("%d is NOT a Palindrome\n", num);
    }

    return 0;
}