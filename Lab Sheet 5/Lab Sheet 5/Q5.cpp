// Q5. Menu-driven Push, Pop, Peek, and Display.
#include <iostream>
using namespace std;
int main(){const int MAX=100;int s[MAX],top=-1,c,x;do{cout<<"1 Push 2 Pop 3 Peek 4 Display 5 Exit\n";cin>>c;if(c==1){cin>>x;if(top==MAX-1)cout<<"Stack Overflow\n";else s[++top]=x;}else if(c==2){if(top==-1)cout<<"Stack Underflow\n";else cout<<s[top--]<<" popped\n";}else if(c==3){if(top==-1)cout<<"Stack is Empty\n";else cout<<"Top element = "<<s[top]<<'\n';}else if(c==4){if(top==-1)cout<<"Stack is Empty\n";else{for(int i=top;i>=0;i--)cout<<s[i]<<' ';cout<<'\n';}}else if(c!=5)cout<<"Invalid choice\n";}while(c!=5);}
// Push/Pop/Peek: O(1). Display: O(n). Space: O(MAX).
