// Q6. Find the duplicate elements in an array.
#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 4, 3, 4, 5, 1};
    map<int, int> frequency;
    for (int value : arr)
        frequency[value]++;

    set<int> printed;
    bool first = true;
    for (int value : arr) {
        if (frequency[value] > 1 && printed.insert(value).second) {
            if (!first) cout << ' ';
            cout << value;
            first = false;
        }
    }
    return 0;
}
