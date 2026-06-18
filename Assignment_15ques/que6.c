//Equilibrium index

#include<stdio.h>
int main(){
    int arr1[5]={1,3,5,2,2};
    for(int i=1;i<4;i++){
        int sumr=0;
        int suml=0;
        for(int j=i+1;j<5;j++){
            sumr+=arr1[j];
        }
        for(int j=i-1;j>=0;j--){
            suml+=arr1[j];
        } 
        if (sumr==suml){
            printf("%d",i);
            break;
        }
    }
}