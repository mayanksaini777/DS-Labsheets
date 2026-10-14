// Q4. Implement Bubble Sort in ascending order and display the array after each pass.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int pass = 0; pass < n - 1; pass++) {
        bool swapped = false;
        for (int j = 0; j < n - pass - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
                swapped = true;
            }
        }
        cout << "Pass " << pass + 1 << ": ";
        for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
        if (!swapped) break;
    }
    return 0;
}
// Time: O(n) best, O(n^2) average/worst. Space: O(1).
