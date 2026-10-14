// Q9. Implement Quick Sort using the last element as the pivot.
#include <iostream>
using namespace std;

int partitionArray(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
    }
    int t = arr[i + 1]; arr[i + 1] = arr[high]; arr[high] = t;
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partitionArray(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
// Time: O(n log n) best/average, O(n^2) worst. Space: O(log n) average recursion stack.
