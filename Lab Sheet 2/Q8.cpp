// Q8. Implement Merge Sort using separate sorting and merging functions.
#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int *a = new int[n1], *b = new int[n2];
    for (int i = 0; i < n1; i++) a[i] = arr[left + i];
    for (int i = 0; i < n2; i++) b[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) arr[k++] = (a[i] <= b[j]) ? a[i++] : b[j++];
    while (i < n1) arr[k++] = a[i++];
    while (j < n2) arr[k++] = b[j++];
    delete[] a; delete[] b;
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
// Time: O(n log n) best/average/worst. Space: O(n). Stable.
