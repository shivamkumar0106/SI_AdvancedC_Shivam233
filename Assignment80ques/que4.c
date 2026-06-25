#include<stdio.h>

int main(){

    int a = 12;
    int b = 23;

    printf("Before Swapping : a is %d and b id %d\n ",a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After Swapping : a is %d and b id %d\n ",a,b);

    return 0;
}