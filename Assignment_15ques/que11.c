#include<stdio.h>

int main()
{
    int arr1[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int tar, row = -1, found = 0;

    printf("Enter the target value: ");
    scanf("%d", &tar);

    for(int i = 0; i < 3; i++){
        if(arr1[i][0] <= tar){
            row = i;
        }
    }

    if(row == -1){
        printf("Not found");
        return 0;
    }

    for(int i = 0; i < 3; i++){
        if(arr1[row][i] == tar){
            printf("Found at (%d, %d)", row, i);
            found = 1;
        }
    }

    if(found == 0){
        printf("Not found");
    }

    return 0;
}