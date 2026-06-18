//Merge two sorted array

#include <stdio.h>

int main() {
    int arr1[4] = {1, 2, 4,7};
    int arr2[5] = {1, 2, 3, 5,8};
    int arr3[9];
    int j=0;
    
    for(int i=0;i<4;i++){
       arr3[j++]=arr1[i];
    }
    for(int k=0;k<5;k++){
        int found=0;
        for(int p=0;p<j;p++){
            if(arr2[k]==arr3[p]){
                found=1;
                break;
            }
        }
        if(!found){
            arr3[j++]=arr2[k];
        }
    }
   
    for(int h=0;h<j;h++){
        for(int l=0;l<j;l++){
            if(arr3[h]<arr3[l]){
                int temp=arr3[l];
                arr3[l]=arr3[h];
                arr3[h]=temp;

            }

        }
    }
    for(int i=0;i<j;i++){
        printf("%d ",arr3[i]);
    }


    return 0;
}