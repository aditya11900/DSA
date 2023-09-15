#include<iostream>
using namespace std;

void sortZerosOnes(int arr[], int size) {
    int CountZeros = 0;
    int countOnes = 0;

    // Count the number of zeros and ones in the array
    for(int i = 0; i < size; i++) {
        if (arr[i] == 0)
            CountZeros++;
        if (arr[i] == 1)
            countOnes++;
    }

    int index = 0;

    // Fill the array with zeros
    while (CountZeros--) {
        arr[index] = 0;
        index++;
    }

    // Fill the remaining part of the array with ones
    while (countOnes--) {
        arr[index] = 1;
        index++;
    }
}

int main() {
    int arr[] = {0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0};
    int n = 11;

    // Call the function to sort zeros and ones
    sortZerosOnes(arr, n);

    // Print the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}
