// Q13. Implement a Stack using a class.
#include <iostream>
using namespace std;
class Stack{static const int MAX=100;int a[MAX],top=-1;public:void push(int x){if(top==MAX-1)cout<<"Stack Overflow\n";else a[++top]=x;}void pop(){if(top==-1)cout<<"Stack Underflow\n";else cout<<a[top--]<<" popped\n";}void peek(){if(top==-1)cout<<"Stack is Empty\n";else cout<<"Top element = "<<a[top]<<'\n';}void display(){if(top==-1){cout<<"Stack is Empty\n";return;}for(int i=top;i>=0;i--)cout<<a[i]<<' ';cout<<'\n';}};
int main(){Stack s;int c,x;do{cout<<"1 Push 2 Pop 3 Peek 4 Display 5 Exit\n";cin>>c;switch(c){case 1:cin>>x;s.push(x);break;case 2:s.pop();break;case 3:s.peek();break;case 4:s.display();break;}}while(c!=5);}
// Push/Pop/Peek: O(1). Display: O(n). Space: O(MAX).
