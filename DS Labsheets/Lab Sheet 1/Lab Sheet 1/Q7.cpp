// Q7. Determine whether one unsorted array is a subset of another. Both arrays have distinct elements and different sizes.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    set<int> values(arr1, arr1 + n);
    bool subset = true;

    for (int i = 0; i < m; i++) {
        if (!values.count(arr2[i])) {
            subset = false;
            break;
        }
    }

    cout << (subset ? "Yes" : "No");
    return 0;
}
