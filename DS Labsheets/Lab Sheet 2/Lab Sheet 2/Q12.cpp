// Q12. Menu-driven Bubble Sort, Insertion Sort, or Selection Sort.
#include <iostream>
using namespace std;

int main() {
    int n, choice;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "1. Bubble Sort  2. Insertion Sort  3. Selection Sort\n";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < n - 1; i++) for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) { int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t; }
    } else if (choice == 2) {
        for (int i = 1; i < n; i++) { int key = arr[i], j = i - 1; while (j >= 0 && arr[j] > key) { arr[j + 1] = arr[j]; j--; } arr[j + 1] = key; }
    } else if (choice == 3) {
        for (int i = 0; i < n - 1; i++) { int m = i; for (int j = i + 1; j < n; j++) if (arr[j] < arr[m]) m = j; int t = arr[i]; arr[i] = arr[m]; arr[m] = t; }
    } else { cout << "Invalid choice"; return 0; }

    for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
// Bubble/Insertion: O(n) best, O(n^2) average/worst. Selection: O(n^2) all cases. Space: O(1).
