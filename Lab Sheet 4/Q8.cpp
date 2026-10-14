#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q8. Search for an element in a Singly Linked List.
int main(){int n,x,key,pos=1;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}cin>>key;Node*p=head;while(p&&p->data!=key){p=p->next;pos++;}if(p)cout<<"Element found at position "<<pos;else cout<<"Element not found";while(head){Node*t=head;head=head->next;delete t;}}
// Search: O(n) worst case. Space: O(n) for the list.
