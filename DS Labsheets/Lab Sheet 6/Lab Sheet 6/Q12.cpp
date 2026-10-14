#include <iostream>
using namespace std;
// Q12. Reverse Queue elements using an array Stack.
int main(){int n;cin>>n;int* q=new int[n];int* s=new int[n];for(int i=0;i<n;i++)cin>>q[i];int top=-1;for(int i=0;i<n;i++)s[++top]=q[i];cout<<"Reversed Queue: ";while(top>=0)cout<<s[top--]<<' ';delete[] q;delete[] s;}
// Time: O(n). Auxiliary space: O(n).
