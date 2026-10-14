// Q5. Merge Sort using separate merge and mergeSort functions.
#include <iostream>
#include <vector>
using namespace std;
void mergeParts(vector<int>& a,int l,int m,int r){vector<int>x(a.begin()+l,a.begin()+m+1),y(a.begin()+m+1,a.begin()+r+1);int i=0,j=0,k=l;while(i<(int)x.size()&&j<(int)y.size())a[k++]=(x[i]<=y[j]?x[i++]:y[j++]);while(i<(int)x.size())a[k++]=x[i++];while(j<(int)y.size())a[k++]=y[j++];}
void mergeSort(vector<int>&a,int l,int r){if(l>=r)return;int m=l+(r-l)/2;mergeSort(a,l,m);mergeSort(a,m+1,r);mergeParts(a,l,m,r);}
int main(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;mergeSort(a,0,n-1);for(int x:a)cout<<x<<' ';}
// Time: O(n log n) in all cases. Space: O(n). Stable.
