// Q14. Doubly Linked List with insertion and deletion operations.
#include <iostream>
using namespace std;
struct Node{int data;Node*prev;Node*next;Node(int x):data(x),prev(nullptr),next(nullptr){}};
class DoublyList{Node*head=nullptr;Node*tail=nullptr;public:void insertEnd(int x){Node*p=new Node(x);if(!tail)head=tail=p;else{tail->next=p;p->prev=tail;tail=p;}}void insertBegin(int x){Node*p=new Node(x);if(!head)head=tail=p;else{p->next=head;head->prev=p;head=p;}}void deleteBegin(){if(!head){cout<<"List is Empty\n";return;}Node*t=head;head=head->next;if(head)head->prev=nullptr;else tail=nullptr;delete t;}void deleteEnd(){if(!tail){cout<<"List is Empty\n";return;}Node*t=tail;tail=tail->prev;if(tail)tail->next=nullptr;else head=nullptr;delete t;}void display(){if(!head){cout<<"List is Empty\n";return;}for(Node*p=head;p;p=p->next)cout<<p->data<<(p->next?" <-> ":"\n");}void clear(){while(head)deleteBegin();}};
int main(){DoublyList l;int c,x;do{cout<<"1 Insert Beginning 2 Insert End 3 Delete Beginning 4 Delete End 5 Display 6 Exit\n";cin>>c;switch(c){case 1:cin>>x;l.insertBegin(x);break;case 2:cin>>x;l.insertEnd(x);break;case 3:l.deleteBegin();break;case 4:l.deleteEnd();break;case 5:l.display();break;case 6:break;default:cout<<"Invalid choice\n";}}while(c!=6);l.clear();}
// Insert/delete at either end: O(1). Display: O(n). Space: O(n).
