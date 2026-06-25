#include <stdio.h>
#include <stdbool.h>

int main() {
    int a[2][2] = { {1, 2}, {3, 4} };
    int b[2][2] = { {1, 2}, {3, 4} };
    bool indi = true;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[i][j] != b[i][j]) {
                indi = false;
                break;
            }
        }
    }

    if (indi == true) {
        printf("Matrices are equal");
    } else {
        printf("Matrices are not equal");
    }

    return 0;
}