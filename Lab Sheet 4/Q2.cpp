#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q2. Insert a node at the beginning of a Linked List.
int main(){int n,x,value;cin>>n;Node*head=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else{Node*t=head;while(t->next)t=t->next;t->next=p;}}cin>>value;Node*p=new Node(value);p->next=head;head=p;for(Node*t=head;t;t=t->next)cout<<t->data<<(t->next?" -> ":" -> NULL");while(head){Node*t=head;head=head->next;delete t;}}
// Insert beginning: O(1). Build/display: O(n). Space: O(n).
