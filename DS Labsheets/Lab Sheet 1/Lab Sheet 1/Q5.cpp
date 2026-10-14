// Q5. Print the union and intersection of two arrays.
#include <iostream>
#include <set>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    set<int> valuesInB(B, B + m), printed;

    cout << "Union=";
    bool first = true;
    for (int i = 0; i < n + m; i++) {
        int value = i < n ? A[i] : B[i - n];
        if (printed.insert(value).second) {
            if (!first) cout << ',';
            cout << value;
            first = false;
        }
    }

    cout << " Intersection=";
    printed.clear();
    first = true;
    for (int i = 0; i < n; i++) {
        if (valuesInB.count(A[i]) && printed.insert(A[i]).second) {
            if (!first) cout << ',';
            cout << A[i];
            first = false;
        }
    }
    return 0;
}
