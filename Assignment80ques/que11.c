#include<stdio.h>

int main(){

    int total_days;

    printf("Enter number of days : ");
    scanf("%d",&total_days);

    int year = total_days/365;
    int remain_days = total_days%365;
    int months = remain_days/30;
    int days = remain_days%30;

    printf("%d days is equal to %d years %d months and %d days",total_days, year,months, days);


    return 0;
}