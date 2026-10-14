#include <iostream>
using namespace std;
// Q10. Search for an element in a Queue.
int main(){int n,key;cin>>n;int* q=new int[n];for(int i=0;i<n;i++)cin>>q[i];cin>>key;int pos=-1;for(int i=0;i<n;i++)if(q[i]==key){pos=i+1;break;}if(pos==-1)cout<<"Element not found";else cout<<"Element found at position "<<pos;delete[] q;}
// Search: O(n). Space: O(n) for queue storage.
