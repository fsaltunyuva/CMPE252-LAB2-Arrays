#include <stdio.h>

#define SIZE 1000

void readInput(int arr[], int *nPtr) {
    printf("Enter the number of elements:\n");
    scanf("%d", &*nPtr);

    printf("Enter %d elements:\n", *nPtr);

    for (int i = 0; i < *nPtr; i++) {
        scanf("%d", &arr[i]);
    }
}

void printNumbers(const int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}


void findMinMax(const int arr[], int n, int *minPtr, int *maxPtr) {
    if(n <= 0){
        int max = 0;
        int min = 0;
        *minPtr = min;
        *maxPtr = max;
        return;
    }
    int max = -99999;
    int min = 99999;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    *minPtr = min;
    *maxPtr = max;
}

int main() {
    int arr[SIZE];
    int n, min, max;

    readInput(arr, &n);
    printNumbers(arr, n);
    findMinMax(arr, n, &min, &max);
    printf("\nMinimum of array is: %d", min);
    printf("\nMaximum of array is: %d", max);
    return 0;
}
