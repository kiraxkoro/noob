#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (arr[middle] == element) {
            return middle;
        }
        if (arr[middle] < element) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 10;
    int result = binarySearch(arr, size, element);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}


