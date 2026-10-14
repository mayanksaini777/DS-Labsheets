// Q14. Demonstrate best-case Bubble and Insertion Sort on an already sorted array.
#include <iostream>
#include <vector>
using namespace std;
long long bubble(vector<int>&a){long long c=0;for(int i=0;i<(int)a.size()-1;i++){bool s=false;for(int j=0;j<(int)a.size()-i-1;j++){c++;if(a[j]>a[j+1]){swap(a[j],a[j+1]);s=true;}}if(!s)break;}return c;}
long long insertion(vector<int>&a){long long c=0;for(int i=1;i<(int)a.size();i++){int k=a[i],j=i-1;while(j>=0){c++;if(a[j]<=k)break;a[j+1]=a[j--];}a[j+1]=k;}return c;}
int main(){int n;cin>>n;vector<int>a(n);for(int i=0;i<n;i++)a[i]=i+1;vector<int>b=a;cout<<"Sorted input: ";for(int x:a)cout<<x<<' ';cout<<'\n';cout<<"Bubble comparisons: "<<bubble(a)<<'\n'<<"Insertion comparisons: "<<insertion(b);}
// Best-case time: O(n) for both. Auxiliary space: O(1).
