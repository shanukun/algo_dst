// https://www.codechef.com/problems/ANUUND
#include <iostream>

void swap(int arr[], int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int findPartition(int arr[], int low, int high) {
    int partitionInd = low;
    
    for(int i = low + 1; i <= high; i++) {
        if (arr[partitionInd] > arr[i]) {
            swap(arr, partitionInd + 1, i);
            swap(arr, partitionInd + 1, partitionInd);
            partitionInd++;
        }
    }
    return partitionInd;
}

void quickSort(int arr[], int low, int high) {
    if (low >= high)
        return;
    else {
        int partitionInd = findPartition(arr, low, high);
        quickSort(arr, low, partitionInd);
        quickSort(arr, partitionInd + 1, high);
    }
}

int main() {
    int testCase;
    int arrSize;
    int midInd;

    std::cin >> testCase;

    while(testCase--) {
        std::cin >> arrSize;
        int arr[arrSize];

        for(int i = 0; i < arrSize; i++) {
            std::cin >> arr[i];
        }

        quickSort(arr, 0, arrSize - 1);

        midInd = arrSize / 2;

        for(int j = 0; j < midInd; j++) {
            std::cout << arr[j] << " " << arr[arrSize - 1 - j] << " ";
        }
        if (arrSize % 2 != 0) {
            std::cout << arr[midInd];
        }


        std::cout << std::endl;
    }
}
