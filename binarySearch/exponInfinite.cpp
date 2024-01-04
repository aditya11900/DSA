#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int binarySrch(int arr[], int start, int end, int find) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == find) {
            return mid;
        } else if (find > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int findBounds(int arr[], int find) {
    int i = 1;
    while (true) {
        if (arr[i] >= find) {
            break;
        }
        i = i * 2;
    }
    return i;
}
int exponential(int arr[], int find) {
    if (arr[0] == find) return 0;

    int bounds = findBounds(arr, find);
    return binarySrch(arr, bounds / 2, min(bounds, INT_MAX), find);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int find = 13;
    int ans = exponential(arr, find);
    cout << ans << endl;

    return 0;
}
