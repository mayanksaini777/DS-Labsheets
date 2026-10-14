#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q6. Delete a node from the end.
int main(){int n,x;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}if(!head)cout<<"List is Empty";else if(!head->next){delete head;head=nullptr;cout<<"List is Empty";}else{Node*p=head;while(p->next->next)p=p->next;delete p->next;p->next=nullptr;for(Node*t=head;t;t=t->next)cout<<t->data<<(t->next?" -> ":" -> NULL");}while(head){Node*t=head;head=head->next;delete t;}}
// Delete end: O(n). Build/display: O(n). Space: O(n).
