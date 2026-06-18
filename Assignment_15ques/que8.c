//Matrix Boundary Traversal

#include<stdio.h>

int main() {
    int arr1[3][3] = {{1,2,3},{5,5,6},{7,5,5}};
    int row = 3, col = 3;
    for(int i = 0; i < col; i++) {
        printf("%d ", arr1[0][i]);
    }    
    for(int i = 1; i < row - 1; i++) {
        printf("%d ", arr1[i][col - 1]);
    }    
    for(int i = col - 1; i >= 0; i--) {
        printf("%d ", arr1[row - 1][i]);
    }
    for(int i = row - 2; i >= 1; i--) {
        printf("%d ", arr1[i][0]);
    }

  
}