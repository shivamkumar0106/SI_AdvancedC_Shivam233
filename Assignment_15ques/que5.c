//Leaders in array

#include<stdio.h>
int main(){
    int arr1[5]={13,4,17,5,2};
    int max=arr1[0];
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=i+1;j<5;j++){
            sum=sum+arr1[j];
        }
        if(arr1[i]>sum){
            printf("%d ",arr1[i]);
        }
        
    }

    return 0;
}