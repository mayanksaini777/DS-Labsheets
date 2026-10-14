// Q4. Print the kth smallest and kth largest elements of an array.
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string ordinal(int number) {
    int lastTwo = number % 100;
    if (lastTwo >= 11 && lastTwo <= 13)
        return to_string(number) + "th";

    switch (number % 10) {
        case 1: return to_string(number) + "st";
        case 2: return to_string(number) + "nd";
        case 3: return to_string(number) + "rd";
        default: return to_string(number) + "th";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    sort(arr, arr + n);
    cout << ordinal(k) << " Smallest=" << arr[k - 1]
         << " " << ordinal(k) << " Largest=" << arr[n - k];
    return 0;
}
