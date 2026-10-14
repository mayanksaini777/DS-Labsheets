#include <iostream>
using namespace std;
// Q13. Implement a Circular Queue using an array.
class CircularQueue{static const int MAX=5;int a[MAX],front=-1,rear=-1;public:void enqueue(int x){if((rear+1)%MAX==front){cout<<"Queue Overflow\n";return;}if(front==-1)front=0;rear=(rear+1)%MAX;a[rear]=x;}void dequeue(){if(front==-1){cout<<"Queue Underflow\n";return;}cout<<a[front]<<" deleted\n";if(front==rear)front=rear=-1;else front=(front+1)%MAX;}void display(){if(front==-1){cout<<"Queue is Empty\n";return;}int i=front;while(true){cout<<a[i]<<' ';if(i==rear)break;i=(i+1)%MAX;}cout<<'\n';}};
int main(){CircularQueue q;int c,x;do{cout<<"1 Enqueue 2 Dequeue 3 Display 4 Exit\n";cin>>c;if(c==1){cin>>x;q.enqueue(x);}else if(c==2)q.dequeue();else if(c==3)q.display();}while(c!=4);}
// Enqueue/Dequeue: O(1). Display: O(n). Space: O(MAX).
