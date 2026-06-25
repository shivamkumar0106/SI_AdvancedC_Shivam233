#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, base, ci_amt, ci;


    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    base = (1 + rate / 100);
    ci_amt = principal * pow(base, time);
    ci = ci_amt - principal;

    printf("Simple Interest:   %f\n", si);
    printf("Compound Interest: %f\n", ci);

    return 0;
}