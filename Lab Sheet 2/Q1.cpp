// Q1. Implement Linear Search and display the key's position if found.
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cin >> key;

    int position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) { position = i + 1; break; }
    }
    if (position == -1) cout << "Key not found";
    else cout << "Key found at position " << position;
    return 0;
}
// Time: O(n) average/worst, O(1) best. Space: O(1).
