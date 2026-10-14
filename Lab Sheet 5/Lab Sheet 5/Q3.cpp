// Q3. Demonstrate Stack Underflow.
#include <iostream>
using namespace std;
int main(){const int MAX=5;int s[MAX],top=-1;if(top==-1)cout<<"Stack Underflow\n";else cout<<s[top--]<<" popped\n";}
// Pop: O(1). Space: O(MAX).
