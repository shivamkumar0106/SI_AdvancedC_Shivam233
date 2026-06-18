/*WAP to take input from user and check if input contain 
(i) All even digits*/

#include<stdio.h>
#include<stdbool.h>

int main(){
    int num, rem;
    bool indi = true;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp=num; temp>0; temp/=10){
        rem = temp%10;
        if (rem%2!=0){
            indi = false;
            break;
        }
    }

    if (indi==true){
        printf("Number %d is purely EVEN\n",num);
    }
    else{
        printf("Number %d is NOT purely EVEN\n",num);
    }
   
    return 0;
}