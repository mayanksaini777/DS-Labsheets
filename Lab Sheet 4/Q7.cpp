#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q7. Delete a node from a given 1-based position.
int main(){int n,x,pos;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}cin>>pos;if(pos<1||pos>n)cout<<"Invalid position\n";else if(pos==1){Node*t=head;head=head->next;delete t;}else{Node*p=head;for(int i=1;i<pos-1;i++)p=p->next;Node*t=p->next;p->next=t->next;delete t;}if(!head)cout<<"List is Empty";else for(Node*p=head;p;p=p->next)cout<<p->data<<(p->next?" -> ":" -> NULL");while(head){Node*t=head;head=head->next;delete t;}}
// Delete at position: O(n) worst case. Space: O(n) for the list.
