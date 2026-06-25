#include <stdio.h>

int main() {
    int a[2][2] = { {1, 2}, {3, 4} };
    int transpose[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[i][j] = a[j][i];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}