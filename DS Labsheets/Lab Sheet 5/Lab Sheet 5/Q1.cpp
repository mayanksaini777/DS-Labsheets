// Q1. Array Stack with Push, Pop, Peek, and Display.
#include <iostream>
using namespace std;
const int MAX=5; int a[MAX],top=-1;
void push(int x){if(top==MAX-1)cout<<"Stack Overflow\n";else a[++top]=x;}
void pop(){if(top==-1)cout<<"Stack Underflow\n";else cout<<a[top--]<<" popped\n";}
void peek(){if(top==-1)cout<<"Stack is Empty\n";else cout<<"Top element = "<<a[top]<<'\n';}
void display(){if(top==-1){cout<<"Stack is Empty\n";return;}for(int i=top;i>=0;i--)cout<<a[i]<<' ';cout<<'\n';}
int main(){int c,x;do{cout<<"1 Push 2 Pop 3 Peek 4 Display 5 Exit\n";cin>>c;switch(c){case 1:cin>>x;push(x);break;case 2:pop();break;case 3:peek();break;case 4:display();break;}}while(c!=5);}
// Push/Pop/Peek: O(1). Display: O(n). Space: O(MAX).
