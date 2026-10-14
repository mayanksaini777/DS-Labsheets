// Q5. Implement Bubble Sort in descending order.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
// Time: O(n) best, O(n^2) average/worst. Space: O(1). Stable.
