//Count Inversions in Array

#include<stdio.h>
int main(){
    int arr1[5]={1,4,3,2,5};
    int count=0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr1[i]>arr1[j]){
                count++;
            }

        }
    }
    printf("%d",count);

    return 0;
}
