//Dutch National Flag Problem

#include<stdio.h>
int main(){
    int arr1[6]={0,1,0,2,2,0};
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr1[j]>arr1[j+1]){
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr1[i]);
    }
}