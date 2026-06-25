#include<stdio.h>
#include<stdbool.h>

int main(){
    int num, rem;
    bool indi = true;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp=num; temp>0; temp/=10){
        rem = temp%10;
        if (!(rem==2||rem==3||rem==5||rem==7)){
            indi = false;
            break;
        }
    }

    if (indi==true){
        printf("Number %d is purely PRIME\n",num);
    }
    if(indi==false){
        printf("Number %d is NOT purely PRIME\n",num);
    }
   
    return 0;
}