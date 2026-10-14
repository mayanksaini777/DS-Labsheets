// Q7. Quick Sort with the array displayed after every partition.
#include <iostream>
#include <vector>
using namespace std;
int partitionArray(vector<int>&a,int l,int h){int pivot=a[h],i=l-1;for(int j=l;j<h;j++)if(a[j]<=pivot)swap(a[++i],a[j]);swap(a[i+1],a[h]);return i+1;}
void quickSort(vector<int>&a,int l,int h){if(l<h){int p=partitionArray(a,l,h);cout<<"After partition: ";for(int x:a)cout<<x<<' ';cout<<'\n';quickSort(a,l,p-1);quickSort(a,p+1,h);}}
int main(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;quickSort(a,0,n-1);}
// Time: best/average O(n log n), worst O(n^2). Space: O(log n) average recursion stack.
