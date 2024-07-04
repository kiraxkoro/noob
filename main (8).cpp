#include <iostream>
#include <algorithm>
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
    int size, element;

  
    cout << "Enter the size of the array: ";
    cin >> size;

    
    int arr[size];
    cout << "Enter " << size << " sorted elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

 
    sort(arr, arr + size);

   
    cout << "Enter the element to search for: ";
    cin >> element;

    
    int result = binarySearch(arr, size, element);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

