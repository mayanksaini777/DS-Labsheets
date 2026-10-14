// Q12. Implement two Stacks in a single array.
#include <iostream>
using namespace std;
int main(){const int MAX=10;int a[MAX],top1=-1,top2=MAX;int c,stackNo,value;do{cout<<"1 Push 2 Pop 3 Display 4 Exit\n";cin>>c;if(c==1){cin>>stackNo>>value;if(top1+1==top2)cout<<"Stack Overflow\n";else if(stackNo==1)a[++top1]=value;else if(stackNo==2)a[--top2]=value;else cout<<"Invalid stack\n";}else if(c==2){cin>>stackNo;if(stackNo==1){if(top1<0)cout<<"Stack Underflow\n";else cout<<a[top1--]<<" popped\n";}else if(stackNo==2){if(top2==MAX)cout<<"Stack Underflow\n";else cout<<a[top2++]<<" popped\n";}else cout<<"Invalid stack\n";}else if(c==3){cout<<"Stack 1: ";for(int i=top1;i>=0;i--)cout<<a[i]<<' ';cout<<"\nStack 2: ";for(int i=top2;i<MAX;i++)cout<<a[i]<<' ';cout<<'\n';}}while(c!=4);}
// Push/Pop: O(1). Display: O(n). Space: O(MAX) shared by both stacks.
