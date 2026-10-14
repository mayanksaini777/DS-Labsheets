// Q7. Implement Selection Sort and display the minimum selected in each pass.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) if (arr[j] < arr[minIndex]) minIndex = j;
        cout << "Minimum selected: " << arr[minIndex] << '\n';
        int temp = arr[i]; arr[i] = arr[minIndex]; arr[minIndex] = temp;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << (i + 1 == n ? '\n' : ' ');
    return 0;
}
// Time: O(n^2) best/average/worst. Space: O(1). Usually not stable.
