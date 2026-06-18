//Maximum subarray sum (Kadane's algo)

#include<stdio.h>

int main(){
    int arr[4]={5,-6,2,9};
    int arr1[4];
    int max;
    
    max=arr[0];
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=i;j<4;j++){
            sum=sum+arr[j];
            
            
        }
        if(sum>max){
            max=sum;
        }
        
    }
    printf("%d",max);

    return 0;
}