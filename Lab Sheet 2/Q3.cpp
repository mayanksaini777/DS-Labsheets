// Q3. Compare Linear Search and Binary Search on the same sorted array.
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) if (arr[i] == key) return i;
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;
    int linear = linearSearch(arr, n, key);
    int binary = binarySearch(arr, n, key);
    cout << "Linear Search: " << (linear < 0 ? -1 : linear + 1) << '\n';
    cout << "Binary Search: " << (binary < 0 ? -1 : binary + 1);
    return 0;
}
// Linear: O(n) average/worst, O(1) best. Binary: O(log n) average/worst, O(1) best. Space: O(1).
// Input array must be sorted for Binary Search.
