// Q8. Find the first repeating element in an array.
#include <iostream>
#include <map>
using namespace std;

int main() {
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> frequency;

    for (int value : arr)
        frequency[value]++;

    for (int i = 0; i < n; i++) {
        if (frequency[arr[i]] > 1) {
            cout << arr[i];
            return 0;
        }
    }

    cout << -1;
    return 0;
}
