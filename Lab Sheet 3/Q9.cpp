// Q9. Compare comparisons and swaps for Bubble, Insertion, and Selection Sort.
#include <iostream>
#include <vector>
using namespace std;
struct Stats{long long comparisons=0,swaps=0;};
Stats bubble(vector<int>&a){Stats s;for(int i=0;i<(int)a.size()-1;i++){bool changed=false;for(int j=0;j<(int)a.size()-i-1;j++){s.comparisons++;if(a[j]>a[j+1]){swap(a[j],a[j+1]);s.swaps++;changed=true;}}if(!changed)break;}return s;}
Stats insertion(vector<int>&a){Stats s;for(int i=1;i<(int)a.size();i++){int k=a[i],j=i-1;while(j>=0){s.comparisons++;if(a[j]<=k)break;a[j+1]=a[j];s.swaps++;j--;}a[j+1]=k;}return s;}
Stats selection(vector<int>&a){Stats s;for(int i=0;i<(int)a.size()-1;i++){int m=i;for(int j=i+1;j<(int)a.size();j++){s.comparisons++;if(a[j]<a[m])m=j;}if(m!=i){swap(a[i],a[m]);s.swaps++;}}return s;}
int main(){int n;cin>>n;vector<int>base(n);for(int&x:base)cin>>x;vector<int>a=base;Stats x=bubble(a);a=base;Stats y=insertion(a);a=base;Stats z=selection(a);cout<<"Bubble: comparisons="<<x.comparisons<<", swaps="<<x.swaps<<'\n'<<"Insertion: comparisons="<<y.comparisons<<", shifts="<<y.swaps<<'\n'<<"Selection: comparisons="<<z.comparisons<<", swaps="<<z.swaps;}
// All three have O(1) auxiliary space. Insertion's reported moves are shifts, not literal swaps.
