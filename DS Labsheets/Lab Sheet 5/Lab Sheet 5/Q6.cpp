// Q6. Implement a Stack of integers using an array.
#include <iostream>
using namespace std;
int main(){int n;cin>>n;int* s=new int[n];int top=-1;for(int i=0;i<n;i++){int x;cin>>x;if(top==n-1)cout<<"Stack Overflow\n";else s[++top]=x;}cout<<"Stack from TOP: ";for(int i=top;i>=0;i--)cout<<s[i]<<' ';delete[] s;}
// Push: O(1) each. Display: O(n). Space: O(n).
