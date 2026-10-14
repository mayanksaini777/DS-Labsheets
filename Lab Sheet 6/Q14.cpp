// Q14. Implement Queue using a Linked List.
#include <iostream>
using namespace std;
struct Node{int data;Node*next;Node(int x):data(x),next(nullptr){}};
class Queue{Node*front=nullptr;Node*rear=nullptr;public:void enqueue(int x){Node*p=new Node(x);if(!rear)front=rear=p;else{rear->next=p;rear=p;}}void dequeue(){if(!front){cout<<"Queue Underflow\n";return;}Node*t=front;cout<<t->data<<" deleted\n";front=front->next;if(!front)rear=nullptr;delete t;}void display(){if(!front){cout<<"Queue is Empty\n";return;}for(Node*p=front;p;p=p->next)cout<<p->data<<' ';cout<<'\n';}void clear(){while(front){Node*t=front;front=front->next;delete t;}rear=nullptr;}};
int main(){Queue q;int c,x;do{cout<<"1 Enqueue 2 Dequeue 3 Display 4 Exit\n";cin>>c;if(c==1){cin>>x;q.enqueue(x);}else if(c==2)q.dequeue();else if(c==3)q.display();}while(c!=4);q.clear();}
// Enqueue/Dequeue: O(1). Display: O(n). Space: O(n).
