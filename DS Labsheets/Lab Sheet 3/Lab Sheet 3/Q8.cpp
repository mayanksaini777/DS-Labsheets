// Q8. Implement Bubble, Insertion, Selection, Merge, and Quick Sort.
#include <iostream>
#include <vector>
using namespace std;
void bubble(vector<int>&a){for(int i=0;i<(int)a.size()-1;i++){bool s=false;for(int j=0;j<(int)a.size()-i-1;j++)if(a[j]>a[j+1]){swap(a[j],a[j+1]);s=true;}if(!s)break;}}
void insertion(vector<int>&a){for(int i=1;i<(int)a.size();i++){int k=a[i],j=i-1;while(j>=0&&a[j]>k)a[j+1]=a[j--];a[j+1]=k;}}
void selection(vector<int>&a){for(int i=0;i<(int)a.size()-1;i++){int m=i;for(int j=i+1;j<(int)a.size();j++)if(a[j]<a[m])m=j;swap(a[i],a[m]);}}
void mergeParts(vector<int>&a,int l,int m,int r){vector<int>x(a.begin()+l,a.begin()+m+1),y(a.begin()+m+1,a.begin()+r+1);int i=0,j=0,k=l;while(i<(int)x.size()&&j<(int)y.size())a[k++]=x[i]<=y[j]?x[i++]:y[j++];while(i<(int)x.size())a[k++]=x[i++];while(j<(int)y.size())a[k++]=y[j++];}
void mergeSort(vector<int>&a,int l,int r){if(l>=r)return;int m=l+(r-l)/2;mergeSort(a,l,m);mergeSort(a,m+1,r);mergeParts(a,l,m,r);}
int part(vector<int>&a,int l,int h){int p=a[h],i=l-1;for(int j=l;j<h;j++)if(a[j]<=p)swap(a[++i],a[j]);swap(a[i+1],a[h]);return i+1;}
void quick(vector<int>&a,int l,int h){if(l<h){int p=part(a,l,h);quick(a,l,p-1);quick(a,p+1,h);}}
void show(const char*name,vector<int>a){cout<<name<<": ";for(int x:a)cout<<x<<' ';cout<<'\n';}
int main(){int n;cin>>n;vector<int>base(n);for(int&x:base)cin>>x;auto a=base;bubble(a);show("Bubble",a);a=base;insertion(a);show("Insertion",a);a=base;selection(a);show("Selection",a);a=base;mergeSort(a,0,n-1);show("Merge",a);a=base;quick(a,0,n-1);show("Quick",a);}
// Bubble/Insertion/Selection: O(n^2) worst; Merge: O(n log n); Quick: O(n^2) worst. Extra space: Merge O(n), others O(1) plus recursion for Quick.
