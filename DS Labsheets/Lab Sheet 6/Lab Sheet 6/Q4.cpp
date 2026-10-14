#include <iostream>
using namespace std;
// Q4. Peek at the Front element without deleting it.
int main(){int n;cin>>n;int* q=new int[n];for(int i=0;i<n;i++)cin>>q[i];if(n==0)cout<<"Queue is Empty";else cout<<"Front element: "<<q[0];delete[] q;}
// Peek: O(1). Space: O(n) for queue storage.
