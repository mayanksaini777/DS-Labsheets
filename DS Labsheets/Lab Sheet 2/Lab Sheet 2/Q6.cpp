// Q6. Implement Insertion Sort in ascending order and display each pass.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key) { arr[j + 1] = arr[j]; j--; }
        arr[j + 1] = key;
        cout << "Pass " << i << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << (k + 1 == n ? '\n' : ' ');
    }
    return 0;
}
// Time: O(n) best, O(n^2) average/worst. Space: O(1). Stable.
