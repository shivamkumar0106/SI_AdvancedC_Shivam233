#include<stdio.h>

int main(){

    int a = 12;
    int b = 23;
    int temp;

    printf("Before Swapping : a is %d and b id %d\n ",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swapping : a is %d and b id %d\n ",a,b);

    return 0;
}