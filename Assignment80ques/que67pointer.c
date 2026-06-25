#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    ptr = arr; 


    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    printf("Array elements are:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}