// Q11. Menu-driven Linear Search or Binary Search.
#include <iostream>
using namespace std;

int main() {
    int n, choice, key;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "1. Linear Search  2. Binary Search\n";
    cin >> choice >> key;
    int position = -1;
    if (choice == 1) {
        for (int i = 0; i < n; i++) if (arr[i] == key) { position = i; break; }
    } else if (choice == 2) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == key) { position = mid; break; }
            if (arr[mid] < key) left = mid + 1; else right = mid - 1;
        }
    } else { cout << "Invalid choice"; return 0; }
    if (position < 0) cout << "Key not found";
    else cout << "Key found at position " << position + 1;
    return 0;
}
// Linear: O(n) average/worst, O(1) best. Binary: O(log n) average/worst, O(1) best. Space: O(1).
// Provide sorted input when selecting Binary Search.
