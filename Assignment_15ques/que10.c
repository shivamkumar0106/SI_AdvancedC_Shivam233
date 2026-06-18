// Row with Maximum 1s

#include<stdio.h>
int main(){
    int arr1[3][3]={{0,1,1},{1,0,0},{1,1,1}};
    int ind;
    int max=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(arr1[i][j]==1){
                count++;
            }
        }
        if(max<count){
            max=count;
            ind=i;
        }

    }
    printf("max 1s in row %d with %d 1s",(ind+1),(max));

    return 0;
}