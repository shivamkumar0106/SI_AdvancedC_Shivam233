#include<stdio.h>

int main(){
    int arr[7]={1,2,1,1,-1,2,1};
    int eq;
    for(int i=1;i<6;i++){
        int suml=0;
        for(int p=i-1;p>=0;p--){
            suml+=arr[p];
        }
        int sumr=0;
        for(int k=i+1;k<7;k++){
            sumr+=arr[k];
        }
        if(sumr==suml){
            printf("index of element is %d",i);
        }
    }
    
    return 0;
}