#include <iostream>
using namespace std;

void extremePrint(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        cout << arr[left] << " ";  // Print the left extreme
        cout << arr[right] << " "; // Print the right extreme
        left++;
        right--;
    }

    // If the array has an odd number of elements, print the middle element
    if (left == right) {
        cout << arr[left] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    cout << "Extreme elements: ";
    extremePrint(arr, size);
    
    return 0;
}
