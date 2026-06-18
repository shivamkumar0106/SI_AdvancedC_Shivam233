#include<stdio.h>

int main(){
    int arr1[5]={5,2,3,4,5};
    int ind;
    printf("Enter the index :");
    scanf("%d",&ind);
    int n=5;
    for(int i=ind;i<n;i++){
        arr1[i]=arr1[i+1];
         
    }
    n--;
    for(int k=0;k<n;k++){
        printf("%d ",arr1[k]);
    }

    return 0;
}