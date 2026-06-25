#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int mainSum = 0, secSum = 0;

    for (int i = 0; i < n; i++) {
        mainSum += a[i][i];
        secSum += a[i][n - i - 1];
    }

    int bothsum = mainSum+secSum;

    printf("Sum of all diognals :%d",bothsum);

    return 0;
}