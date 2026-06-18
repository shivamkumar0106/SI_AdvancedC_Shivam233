//Rotate array by K position

#include<stdio.h>

int main(){
    int arr1[8]={5,1,3,-2,1,0,6,7};
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(int i=0;i<pos;i++){
        int temp=arr1[8-i-1];
        arr1[8-i-1]=arr1[i];
        arr1[i]=temp;
    }
    for(int j=0;j<8;j++){
        printf("%d",arr1[j]);
    }
}