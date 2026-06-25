#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int low = 0, high = n - 1;
    bool indi = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d", mid);
            indi = true;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (indi == false) {
        printf("Element not found");
    }

    return 0;
}