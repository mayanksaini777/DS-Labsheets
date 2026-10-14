// Q12. Sort an array in ascending and descending order using Insertion Sort.
#include <iostream>
#include <vector>
using namespace std;
void insertion(vector<int>&a,bool ascending){for(int i=1;i<(int)a.size();i++){int k=a[i],j=i-1;while(j>=0&&(ascending?a[j]>k:a[j]<k)){a[j+1]=a[j--];}a[j+1]=k;}}
int main(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;insertion(a,true);cout<<"Ascending: ";for(int x:a)cout<<x<<' ';insertion(a,false);cout<<"\nDescending: ";for(int x:a)cout<<x<<' ';}
// Time: best O(n), average/worst O(n^2). Space: O(1).
