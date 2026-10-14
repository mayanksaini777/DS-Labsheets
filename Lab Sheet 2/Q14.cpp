// Q14. Compare Bubble Sort and Insertion Sort comparisons on the same array.
#include <iostream>
using namespace std;

long long bubbleSort(int arr[], int n) {
    long long comparisons = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) { int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t; swapped = true; }
        }
        if (!swapped) break;
    }
    return comparisons;
}
long long insertionSort(int arr[], int n) {
    long long comparisons = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0) { comparisons++; if (arr[j] <= key) break; arr[j + 1] = arr[j]; j--; }
        arr[j + 1] = key;
    }
    return comparisons;
}
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; i++) { cin >> a[i]; b[i] = a[i]; }
    cout << "Bubble Sort comparisons: " << bubbleSort(a, n) << '\n';
    cout << "Insertion Sort comparisons: " << insertionSort(b, n);
    return 0;
}
// Both: O(n) best, O(n^2) average/worst time; O(1) space.
