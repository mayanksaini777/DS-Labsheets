#include <iostream>
using namespace std;
// Q8. Menu-driven basic Queue operations using an array.
int main(){const int MAX=100;int q[MAX],front=-1,rear=-1,c,x;do{cout<<"1 Enqueue 2 Dequeue 3 Peek 4 Display 5 Exit\n";cin>>c;if(c==1){cin>>x;if(rear==MAX-1)cout<<"Queue Overflow\n";else{if(front==-1)front=0;q[++rear]=x;}}else if(c==2){if(front==-1)cout<<"Queue Underflow\n";else{cout<<q[front++]<<" deleted\n";if(front>rear)front=rear=-1;}}else if(c==3){if(front==-1)cout<<"Queue is Empty\n";else cout<<q[front]<<'\n';}else if(c==4){if(front==-1)cout<<"Queue is Empty\n";else{for(int i=front;i<=rear;i++)cout<<q[i]<<' ';cout<<'\n';}}else if(c!=5)cout<<"Invalid choice\n";}while(c!=5);}
// Enqueue/Dequeue/Peek: O(1). Display: O(n). Space: O(MAX).
