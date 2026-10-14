// Q1. Print the sum of odd and even elements in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int evenSum = 0, oddSum = 0;

    for (int value : arr) {
        if (value % 2 == 0)
            evenSum += value;
        else
            oddSum += value;
    }

    cout << "SumEven=" << evenSum << " SumOdd=" << oddSum;
    return 0;
}
