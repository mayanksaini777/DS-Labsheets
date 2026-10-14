#include <iostream>
using namespace std;
// Q3. Dequeue and demonstrate deletion from the Front.
int main(){const int MAX=100;int q[MAX],front=-1,rear=-1,n,x;cin>>n;for(int i=0;i<n;i++){cin>>x;if(front==-1)front=0;q[++rear]=x;}if(front==-1||front>rear)cout<<"Queue Underflow";else cout<<q[front++]<<" deleted from Front";}
// Dequeue: O(1). Space: O(n).
