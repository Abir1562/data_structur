#include <stdio.h>

void insertionSortRecursive(int arr[], int n) {
    if (n <= 1)
        return;

    insertionSortRecursive(arr, n - 1);

    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    insertionSortRecursive(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

