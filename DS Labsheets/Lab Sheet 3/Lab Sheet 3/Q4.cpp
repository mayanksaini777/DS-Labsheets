// Q4. Selection Sort ascending; display the minimum selected in each pass.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cin >> n; vector<int> a(n); for(int& x:a) cin >> x;
    for(int i=0;i<n-1;i++){int m=i;for(int j=i+1;j<n;j++)if(a[j]<a[m])m=j;cout<<"Minimum selected: "<<a[m]<<'\n';swap(a[i],a[m]);}
    cout << "Sorted array: "; for(int x:a) cout << x << ' ';
}
// Time: O(n^2) in all cases. Space: O(1). Not stable.
