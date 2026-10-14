#include <iostream>
using namespace std;
// Q6. Demonstrate Queue Overflow using an array.
int main(){const int MAX=5;int q[MAX],front=-1,rear=-1;for(int x=10;x<=60;x+=10){if(rear==MAX-1)cout<<"Queue Overflow\n";else{if(front==-1)front=0;q[++rear]=x;cout<<x<<" inserted\n";}}}
// Enqueue: O(1). Space: O(MAX).
