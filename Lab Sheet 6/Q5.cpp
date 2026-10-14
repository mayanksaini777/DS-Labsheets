#include <iostream>
using namespace std;
// Q5. Display Queue elements from Front to Rear.
int main(){int n;cin>>n;int* q=new int[n];for(int i=0;i<n;i++)cin>>q[i];if(n==0)cout<<"Queue is Empty";else for(int i=0;i<n;i++)cout<<q[i]<<' ';delete[] q;}
// Display: O(n). Space: O(n) for queue storage.
