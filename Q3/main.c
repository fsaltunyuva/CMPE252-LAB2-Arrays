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

void findLeaders(const int arr[], int n, int leadersArr[], int *sp) {
    if(n <= 0){
        return;
    }
    leadersArr[*sp] = arr[n-1];
    *sp = 1;

    for (int i = n-1; i >= 0; i--) {
        int greaterThanAll = 0;
        for (int j = i + 1; j < n; j++) {

            if (arr[i] >= arr[j]) {
                greaterThanAll = 1;
            } else {
                greaterThanAll = 0;
                break;
            }
        }
        if (greaterThanAll == 1) {
            leadersArr[*sp] = arr[i];
            *sp = *sp + 1;

        }
    }
}

int main() {
    int arr[SIZE];
    int n;
    int leadersArr[SIZE];
    int s;

    readInput(arr, &n);
    printNumbers(arr, n);
    findLeaders(arr, n, leadersArr, &s);
    printf("Leaders ");
    printNumbers(leadersArr, s);
    return 0;
}
