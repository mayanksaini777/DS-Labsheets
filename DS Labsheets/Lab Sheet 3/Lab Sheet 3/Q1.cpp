// Q1. Bubble Sort ascending; display the array before sorting and after each pass.
#include <iostream>
#include <vector>
using namespace std;
void show(const vector<int>& a) { for (int x : a) cout << x << ' '; cout << '\n'; }
int main() {
    int n; cin >> n; vector<int> a(n); for (int& x : a) cin >> x;
    cout << "Before sorting: "; show(a);
    for (int i=0;i<n-1;i++) { bool swapped=false; for(int j=0;j<n-i-1;j++) if(a[j]>a[j+1]) { swap(a[j],a[j+1]); swapped=true; }
        cout << "Pass " << i+1 << ": "; show(a); if(!swapped) break; }
}
// Time: best O(n), average/worst O(n^2). Space: O(1).
