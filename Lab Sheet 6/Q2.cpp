#include <iostream>
using namespace std;
// Q2. Enqueue values and demonstrate insertion at the Rear.
int main(){const int MAX=100;int q[MAX],front=-1,rear=-1,n,x;cin>>n;for(int i=0;i<n;i++){cin>>x;if(rear==MAX-1)cout<<"Queue Overflow\n";else{if(front==-1)front=0;q[++rear]=x;cout<<x<<" inserted at Rear\n";}}cout<<"Queue: ";for(int i=front;i<=rear;i++)cout<<q[i]<<' ';}
// Enqueue: O(1). Space: O(MAX).
