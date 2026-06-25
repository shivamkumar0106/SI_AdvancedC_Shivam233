#include<stdio.h>

int main(){

    int choice;
    float temp, temp2;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        temp2 = (temp * 9.0 / 5.0) + 32.0;
        printf("%f C is equal to %f F\n", temp, temp2);
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp2 = (temp - 32.0) * 5.0 / 9.0;
        printf("%f F is equal to %f C\n", temp, temp2);
    } 
    else {
        printf("Invalid choice! Please run the program again and select 1 or 2.\n");
    }

    return 0;
}