#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q9. Count the total number of nodes in a Linked List.
int main(){int n,x,count=0;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}for(Node*p=head;p;p=p->next)count++;cout<<"Number of nodes: "<<count;while(head){Node*t=head;head=head->next;delete t;}}
// Count: O(n). Space: O(n) for the list.
