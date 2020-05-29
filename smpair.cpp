// https://www.codechef.com/problems/SMPAIR

#include <stdio.h>
#include <iostream>

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int findPartition(int arr[], int low, int high) {
    int partitionIndex = low;

    for(int i = low + 1; i <= high; i++) {
        if (arr[partitionIndex] > arr[i]) {
            swap(arr, partitionIndex + 1, i);
            swap(arr, partitionIndex + 1, partitionIndex);
            partitionIndex++;
        }
    }
    return partitionIndex;
}

void quickSort(int arr[], int low, int high) {
    if (low >=  high) 
        return;
    else {
        int partitionIndex = findPartition(arr, low, high);
        quickSort(arr, low, partitionIndex);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main() {
    int testCase;
    int sizeOfArray;

    scanf("%d", &testCase);

    while(testCase--) {
        scanf("%d", &sizeOfArray);
        int arr[sizeOfArray];

        for(int i = 0; i < sizeOfArray; i++) {
            scanf("%d", &arr[i]);
        }

        quickSort(arr, 0, sizeOfArray - 1);

        printf("%d ", arr[0] + arr[1]);
    }
    return 0;
}
