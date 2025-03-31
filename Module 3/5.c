#include <stdio.h>

#define SIZE 10

// Function to rotate the array to the left by `d` positions
void rotateLeft(int arr[], int n, int d) {
    d = d % n; // In case d is larger than n
    int temp[d];

    // Store first d elements in a temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy back the first d elements to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int arr[SIZE], d;

    // Input array elements
    printf("Enter 10 elements of the array: ");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &d);

    // Rotate array to the left
    rotateLeft(arr, SIZE, d);

    // Print rotated array
    printf("Array after left rotation: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
