// Q2. Implement Binary Search on a sorted array.
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;

    int left = 0, right = n - 1, position = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) { position = mid + 1; break; }
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    if (position == -1) cout << "Key not found";
    else cout << "Key found at position " << position;
    return 0;
}
// Time: O(log n) average/worst, O(1) best. Space: O(1). Input must be sorted.
