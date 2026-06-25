#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    int i;

    if (n <= 1)
        return false;

    for (i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool isArmstrong(int n) {
    int temp = n;
    int digit, sum = 0;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    return sum == n;
}

bool isPerfect(int n) {
    int i, sum = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");

    if (isArmstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    if (isPerfect(n))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}