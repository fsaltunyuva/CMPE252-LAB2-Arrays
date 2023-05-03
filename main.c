#include <stdio.h>
#include <ctype.h>

#define SIZE 1000

void printNumbers(const int arr[], int n){
    printf("Array elements: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void readInput(int arr[], int *nPtr){
    printf("Enter the number of elements:\n");
    scanf("%d", &*nPtr);

    printf("Enter %d elements:\n", *nPtr);

    for(int i = 0; i < *nPtr; i++){
        scanf("%d", &arr[i]);
    }
}


int main() {
    int arr[SIZE];
    int n, min, max;

    readInput(arr, &n);
    printNumbers(arr, n);

    return 0;
}
