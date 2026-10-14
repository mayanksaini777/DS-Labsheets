// Q10. Implement Quick Sort and display the array after each partition.
#include <iostream>
using namespace std;

int partitionArray(int arr[], int low, int high, int n) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
    }
    int t = arr[i + 1]; arr[i + 1] = arr[high]; arr[high] = t;
    cout << "After partition: ";
    for (int k = 0; k < n; k++) cout << arr[k] << (k + 1 == n ? '\n' : ' ');
    return i + 1;
}

void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pivotIndex = partitionArray(arr, low, high, n);
        quickSort(arr, low, pivotIndex - 1, n);
        quickSort(arr, pivotIndex + 1, high, n);
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1, n);
    return 0;
}
// Time: O(n log n) best/average, O(n^2) worst. Space: O(log n) average recursion stack.
