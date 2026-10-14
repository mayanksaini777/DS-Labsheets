// Q15. Implement three sorting algorithms and show their time complexities.
#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) for (int j = 0; j < n - i - 1; j++)
        if (a[j] > a[j + 1]) { int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }
}
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) { int key = a[i], j = i - 1; while (j >= 0 && a[j] > key) { a[j + 1] = a[j]; j--; } a[j + 1] = key; }
}
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) { int m = i; for (int j = i + 1; j < n; j++) if (a[j] < a[m]) m = j; int t = a[i]; a[i] = a[m]; a[m] = t; }
}
int main() {
    int n;
    cin >> n;
    int* original = new int[n];
    int* a = new int[n];
    int* b = new int[n];
    int* c = new int[n];
    for (int i = 0; i < n; i++) { cin >> original[i]; a[i] = b[i] = c[i] = original[i]; }
    bubbleSort(a, n); insertionSort(b, n); selectionSort(c, n);
    cout << "Bubble Sort: Best O(n), Average O(n^2), Worst O(n^2), Space O(1)\n";
    cout << "Insertion Sort: Best O(n), Average O(n^2), Worst O(n^2), Space O(1)\n";
    cout << "Selection Sort: Best O(n^2), Average O(n^2), Worst O(n^2), Space O(1)\n";
    return 0;
}
// The displayed complexities describe the implemented algorithms.
