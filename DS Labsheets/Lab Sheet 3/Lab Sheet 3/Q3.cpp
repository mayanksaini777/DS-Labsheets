// Q3. Insertion Sort ascending; display the array after every pass.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n; vector<int> a(n); for(int& x:a) cin >> x;
    for(int i=1;i<n;i++) { int key=a[i],j=i-1; while(j>=0&&a[j]>key){a[j+1]=a[j];j--;} a[j+1]=key;
        cout << "Pass " << i << ": "; for(int x:a) cout << x << ' '; cout << '\n'; }
}
// Time: best O(n), average/worst O(n^2). Space: O(1). Stable.
