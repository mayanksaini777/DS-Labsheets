// Q2. Print the sum of two unequal-sized arrays into a third array.
#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int size = n > m ? n : m;
    int C[7];

    for (int i = 0; i < size; i++) {
        int a = i < n ? A[i] : 0;
        int b = i < m ? B[i] : 0;
        C[i] = a + b;
    }

    cout << "Sum[]={";
    for (int i = 0; i < size; i++) {
        if (i > 0) cout << ',';
        cout << C[i];
    }
    cout << '}';
    return 0;
}
