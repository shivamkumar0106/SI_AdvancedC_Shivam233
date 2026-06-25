#include <stdio.h>
#include<stdbool.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = (sizeof(arr)/sizeof(arr[0])), key = 50;
    bool indi=false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d", i);
            indi = true;
            break;
        }
    }

    if (indi==false) {
        printf("Element not found");
    }

    return 0;
}