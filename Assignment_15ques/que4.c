//Find missing number in array

#include<stdio.h>
int main(){
    int arr1[5]={1,3,4,5,6};
    int num=1;
    for(int i=0;i<5;i++){
        if(arr1[i]==num){
            num++;
        }
        else{
            printf("%d is missing",num);
            break;
        }

    }
    return 0;
}