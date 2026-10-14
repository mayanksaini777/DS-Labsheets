// Q13. Count comparisons for Bubble, Insertion, and Selection Sort.
#include <iostream>
#include <vector>
using namespace std;
long long bubble(vector<int>a){long long c=0;for(int i=0;i<(int)a.size()-1;i++){bool s=false;for(int j=0;j<(int)a.size()-i-1;j++){c++;if(a[j]>a[j+1]){swap(a[j],a[j+1]);s=true;}}if(!s)break;}return c;}
long long insertion(vector<int>a){long long c=0;for(int i=1;i<(int)a.size();i++){int k=a[i],j=i-1;while(j>=0){c++;if(a[j]<=k)break;a[j+1]=a[j--];}a[j+1]=k;}return c;}
long long selection(vector<int>a){long long c=0;for(int i=0;i<(int)a.size()-1;i++){int m=i;for(int j=i+1;j<(int)a.size();j++){c++;if(a[j]<a[m])m=j;}swap(a[i],a[m]);}return c;}
int main(){int n;cin>>n;vector<int>a(n);for(int&x:a)cin>>x;cout<<"Bubble Sort comparisons: "<<bubble(a)<<'\n'<<"Insertion Sort comparisons: "<<insertion(a)<<'\n'<<"Selection Sort comparisons: "<<selection(a);}
// Time: O(n^2) worst case for each. Space: O(n) here because each counter function receives a copy.
