// Q10. Sort the same array with Merge Sort and Quick Sort; compare complexity.
#include <iostream>
#include <vector>
using namespace std;
void mergeParts(vector<int>&a,int l,int m,int r){vector<int>x(a.begin()+l,a.begin()+m+1),y(a.begin()+m+1,a.begin()+r+1);int i=0,j=0,k=l;while(i<(int)x.size()&&j<(int)y.size())a[k++]=x[i]<=y[j]?x[i++]:y[j++];while(i<(int)x.size())a[k++]=x[i++];while(j<(int)y.size())a[k++]=y[j++];}
void mergeSort(vector<int>&a,int l,int r){if(l<r){int m=l+(r-l)/2;mergeSort(a,l,m);mergeSort(a,m+1,r);mergeParts(a,l,m,r);}}
int part(vector<int>&a,int l,int h){int p=a[h],i=l-1;for(int j=l;j<h;j++)if(a[j]<=p)swap(a[++i],a[j]);swap(a[i+1],a[h]);return i+1;}
void quick(vector<int>&a,int l,int h){if(l<h){int p=part(a,l,h);quick(a,l,p-1);quick(a,p+1,h);}}
void show(const char*n,const vector<int>&a){cout<<n<<": ";for(int x:a)cout<<x<<' ';cout<<'\n';}
int main(){int n;cin>>n;vector<int>base(n);for(int&x:base)cin>>x;auto a=base;mergeSort(a,0,n-1);show("Merge Sort",a);a=base;quick(a,0,n-1);show("Quick Sort",a);cout<<"Merge Sort: O(n log n) best/average/worst time, O(n) extra space.\nQuick Sort: O(n log n) best/average, O(n^2) worst time, O(log n) average stack space.";}
// Quick Sort uses O(n) recursion stack in the worst case.
