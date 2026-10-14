#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q3. Insert a node at the end of a Linked List.
int main(){int n,x,value;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}cin>>value;Node*p=new Node(value);if(!head)head=p;else tail->next=p;for(Node*t=head;t;t=t->next)cout<<t->data<<(t->next?" -> ":" -> NULL");while(head){Node*t=head;head=head->next;delete t;}}
// Insert end: O(1) with a tail pointer. Build/display: O(n). Space: O(n).
