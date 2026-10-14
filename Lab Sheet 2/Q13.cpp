// Q13. Sort an array using Merge Sort, then search with Binary Search.
#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int *a = new int[n1], *b = new int[n2];
    for (int i = 0; i < n1; i++) a[i] = arr[left + i];
    for (int i = 0; i < n2; i++) b[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) arr[k++] = a[i] <= b[j] ? a[i++] : b[j++];
    while (i < n1) arr[k++] = a[i++];
    while (j < n2) arr[k++] = b[j++];
    delete[] a; delete[] b;
}
void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m); mergeSort(arr, m + 1, r); merge(arr, l, m, r);
}
int main() {
    int n, key;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;
    mergeSort(arr, 0, n - 1);
    int l = 0, r = n - 1, position = -1;
    while (l <= r) { int m = l + (r - l) / 2; if (arr[m] == key) { position = m; break; } if (arr[m] < key) l = m + 1; else r = m - 1; }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    if (position < 0) cout << "Key not found"; else cout << "Key found at position " << position + 1;
    return 0;
}
// Merge Sort: O(n log n) time, O(n) space. Binary Search: O(log n) time, O(1) space.
