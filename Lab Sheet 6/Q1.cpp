#include <iostream>
using namespace std;
// Q1. Array Queue with Enqueue, Dequeue, Peek, and Display.
class Queue{static const int MAX=5;int a[MAX],front=-1,rear=-1;public:void enqueue(int x){if(rear==MAX-1){cout<<"Queue Overflow\n";return;}if(front==-1)front=0;a[++rear]=x;}void dequeue(){if(front==-1){cout<<"Queue Underflow\n";return;}cout<<a[front++]<<" deleted\n";if(front>rear)front=rear=-1;}void peek(){if(front==-1)cout<<"Queue is Empty\n";else cout<<"Front element: "<<a[front]<<'\n';}void display(){if(front==-1){cout<<"Queue is Empty\n";return;}for(int i=front;i<=rear;i++)cout<<a[i]<<' ';cout<<'\n';}};
int main(){Queue q;int c,x;do{cout<<"1 Enqueue 2 Dequeue 3 Peek 4 Display 5 Exit\n";cin>>c;switch(c){case 1:cin>>x;q.enqueue(x);break;case 2:q.dequeue();break;case 3:q.peek();break;case 4:q.display();break;}}while(c!=5);}
// Enqueue/Dequeue/Peek: O(1). Display: O(n). Space: O(MAX).
