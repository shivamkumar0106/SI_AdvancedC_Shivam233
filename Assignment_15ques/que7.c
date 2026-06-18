//Matrix multiplication

#include<stdio.h>
int main(){
    int arr1[2][2]={{1,2},{2,1}};
    int arr2[2][3]={{1,3,5},{4,6,8}};
    int arr3[2][3];
    int row1=2,col1=2,row2=2,col2=3;

    for(int k=0;k<2;k++)
    { for(int i=0;i<3;i++){
        arr3[k][i]=0;
        }
    }
    if(col1==row2){
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                for(int h=0;h<col1;h++){
                    arr3[i][j]+=arr1[i][h]*arr2[h][j];
                }
            }
        }
    }
    else{
        printf("can not be multiple");
    }
    for(int k=0;k<2;k++)
    { for(int i=0;i<3;i++){
        printf("%d ",arr3[k][i]);
        }
    }

    return 0;
}