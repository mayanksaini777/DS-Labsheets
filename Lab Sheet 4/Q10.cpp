#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int v):data(v),next(nullptr){} };
// Q10. Find the maximum and minimum elements in a Linked List.
int main(){int n,x;cin>>n;Node*head=nullptr;Node*tail=nullptr;for(int i=0;i<n;i++){cin>>x;Node*p=new Node(x);if(!head)head=p;else tail->next=p;tail=p;}if(!head)cout<<"List is Empty";else{int minimum=head->data,maximum=head->data;for(Node*p=head->next;p;p=p->next){if(p->data<minimum)minimum=p->data;if(p->data>maximum)maximum=p->data;}cout<<"Minimum="<<minimum<<" Maximum="<<maximum;}while(head){Node*t=head;head=head->next;delete t;}}
// Find minimum and maximum: O(n). Space: O(n) for the list.
