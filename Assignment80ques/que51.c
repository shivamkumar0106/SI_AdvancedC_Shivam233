#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[2][2] = { {1, 2}, {2, 1} };
    bool indi = true;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[i][j] != a[j][i]) {
                indi = false;
                break;
            }
        }
    }

    if (indi == true) {
        printf("Matrix is symmetric");
    } else {
        printf("Matrix is not symmetric");
    }

    return 0;
}