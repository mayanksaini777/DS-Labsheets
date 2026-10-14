// Q15. Circular Linked List with traversal and insertion operations.
#include <iostream>
using namespace std;
struct Node{int data;Node*next;Node(int x):data(x),next(nullptr){}};
class CircularList{Node*tail=nullptr;public:void insertEnd(int x){Node*p=new Node(x);if(!tail){tail=p;p->next=p;}else{p->next=tail->next;tail->next=p;tail=p;}}void insertBegin(int x){Node*p=new Node(x);if(!tail){tail=p;p->next=p;}else{p->next=tail->next;tail->next=p;}}void display(){if(!tail){cout<<"List is Empty\n";return;}Node*p=tail->next;do{cout<<p->data<<" -> ";p=p->next;}while(p!=tail->next);cout<<"(back to head)\n";}void clear(){if(!tail)return;Node*head=tail->next;tail->next=nullptr;while(head){Node*t=head;head=head->next;delete t;}tail=nullptr;}};
int main(){CircularList l;int n,x,c;cin>>n;for(int i=0;i<n;i++){cin>>x;l.insertEnd(x);}do{cout<<"1 Insert Beginning 2 Insert End 3 Traverse 4 Exit\n";cin>>c;switch(c){case 1:cin>>x;l.insertBegin(x);break;case 2:cin>>x;l.insertEnd(x);break;case 3:l.display();break;case 4:break;default:cout<<"Invalid choice\n";}}while(c!=4);l.clear();}
// Insert beginning/end: O(1) with a tail pointer. Traversal: O(n). Space: O(n).
