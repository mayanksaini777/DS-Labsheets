#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q4. Insert a node at a given 1-based position.
int main(){int n,x,value,pos;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}cin>>value>>pos;if(pos<1||pos>n+1)cout<<"Invalid position\n";else if(pos==1){Node*p=new Node(value);p->next=head;head=p;}else{Node*t=head;for(int i=1;i<pos-1;i++)t=t->next;Node*p=new Node(value);p->next=t->next;t->next=p;}for(Node*t=head;t;t=t->next)cout<<t->data<<(t->next?" -> ":" -> NULL");while(head){Node*t=head;head=head->next;delete t;}}
// Insert at position: O(n) worst case. Space: O(n) for the list plus O(1) new node.
