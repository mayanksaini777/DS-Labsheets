// Q11. Menu-driven choice of five sorting algorithms.
#include <iostream>
#include <vector>
using namespace std;
void bubble(vector<int>&a){for(int i=0;i<(int)a.size()-1;i++)for(int j=0;j<(int)a.size()-i-1;j++)if(a[j]>a[j+1])swap(a[j],a[j+1]);}
void insertion(vector<int>&a){for(int i=1;i<(int)a.size();i++){int k=a[i],j=i-1;while(j>=0&&a[j]>k)a[j+1]=a[j--];a[j+1]=k;}}
void selection(vector<int>&a){for(int i=0;i<(int)a.size()-1;i++){int m=i;for(int j=i+1;j<(int)a.size();j++)if(a[j]<a[m])m=j;swap(a[i],a[m]);}}
void mergeParts(vector<int>&a,int l,int m,int r){vector<int>x(a.begin()+l,a.begin()+m+1),y(a.begin()+m+1,a.begin()+r+1);int i=0,j=0,k=l;while(i<(int)x.size()&&j<(int)y.size())a[k++]=x[i]<=y[j]?x[i++]:y[j++];while(i<(int)x.size())a[k++]=x[i++];while(j<(int)y.size())a[k++]=y[j++];}
void mergeSort(vector<int>&a,int l,int r){if(l<r){int m=l+(r-l)/2;mergeSort(a,l,m);mergeSort(a,m+1,r);mergeParts(a,l,m,r);}}
int part(vector<int>&a,int l,int h){int p=a[h],i=l-1;for(int j=l;j<h;j++)if(a[j]<=p)swap(a[++i],a[j]);swap(a[i+1],a[h]);return i+1;}
void quick(vector<int>&a,int l,int h){if(l<h){int p=part(a,l,h);quick(a,l,p-1);quick(a,p+1,h);}}
int main(){int n,c;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;cout<<"1 Bubble 2 Insertion 3 Selection 4 Merge 5 Quick\n";cin>>c;switch(c){case 1:bubble(a);break;case 2:insertion(a);break;case 3:selection(a);break;case 4:mergeSort(a,0,n-1);break;case 5:quick(a,0,n-1);break;default:cout<<"Invalid choice";return 0;}for(int x:a)cout<<x<<' ';}
// Bubble/Insertion/Selection: O(n^2) worst; Merge: O(n log n); Quick: O(n^2) worst.
