// Q2. Bubble Sort descending and display the final array.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n; vector<int> a(n); for(int& x:a) cin >> x;
    for(int i=0;i<n-1;i++) { bool swapped=false; for(int j=0;j<n-i-1;j++) if(a[j]<a[j+1]) { swap(a[j],a[j+1]); swapped=true; } if(!swapped) break; }
    cout << "Sorted descending: "; for(int x:a) cout << x << ' ';
}
// Time: best O(n), average/worst O(n^2). Space: O(1).
