#include<stdio.h>

int main(){
    int arr1[10]={1,2,3,4,5};
    int pos;
    printf("Enter the position :");
    scanf("%d",&pos);
    int el;
    printf("Enter the element:");
    int n=5;
    scanf("%d",&el);
    for(int i=n;i>=pos-1;i--){
        arr1[i]=arr1[i-1];
         
    }
    arr1[pos-1]=el;
    n++;
    for(int k=0;k<n;k++){
        printf("%d ",arr1[k]);
    }

    return 0;
}