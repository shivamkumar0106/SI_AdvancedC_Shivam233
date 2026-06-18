//Majority Element  

#include<stdio.h>
int main(){
    int arr[8]={1,2,3,2,2,2,2,3};
    int count=0;
    for(int i=0;i<8;i++){
        count=0;
        for(int j=i+1;j<8;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            else{
                count--;
            }
        }
        if(count>1){
            printf("majority number is %d",arr[i]);
            break;
        }
    }

    return 0;
}