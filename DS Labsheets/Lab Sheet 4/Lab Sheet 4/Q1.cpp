#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q1. Create and display a Singly Linked List.
int main(){int n,x;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}if(!head)cout<<"List is Empty";else{for(Node*p=head;p;p=p->next)cout<<p->data<<(p->next?" -> ":" -> NULL");}while(head){Node*t=head;head=head->next;delete t;}}
// Creation: O(n). Display: O(n). Space: O(n).
