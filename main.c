#include <stdio.h>
#include <ctype.h>

#define SIZE 100

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

void findLeaders(const int arr[], int n, int leadersArr[], int *sp)
{
    int leaderArrayCurrentIndex = 1; //Çünkü sonuncu eleman her zaman ekli başlayacak
    leadersArr[0] = arr[n-1];

    for(int i = 0; i < n-1; i++){ //n-1'e kadar çünkü zaten sonuncu ekli
        int greaterThanAll = 0;
        for(int j = i+1; j < n-1; j++){ //n-1'e kadar çünkü zaten sonuncu ekli
            greaterThanAll = 0;
            if(arr[i] > arr[j]){
                greaterThanAll = 1;
            }
            else{
                greaterThanAll = 0;
            }
        }
        if(greaterThanAll == 1){
            leadersArr[leaderArrayCurrentIndex] = arr[i];
            leaderArrayCurrentIndex++;
        }
    }

    printf("Leaders Array elements: \n");

    for(int i = 0; i < n; i++){
        if(isspace(leadersArr[i]) == 0){
            printf("%d ", leadersArr[i]);
        }
    }
}

int main() {
    int arr[SIZE];
    int n, min, max;

    readInput(arr, &n);
    printNumbers(arr, n);

    printf("\nMinimum of array is: %d", min);
    printf("\nMaximum of array is: %d", max);

    int leadersArr[SIZE];
    int size2 = 100;

    findLeaders(arr, n, leadersArr, &size2);

    return 0;
}
