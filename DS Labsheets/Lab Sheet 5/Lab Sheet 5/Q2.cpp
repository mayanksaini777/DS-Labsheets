// Q2. Demonstrate Stack Overflow.
#include <iostream>
using namespace std;
int main(){const int MAX=5;int s[MAX],top=-1;for(int value=10;value<=60;value+=10){if(top==MAX-1)cout<<"Stack Overflow\n";else{s[++top]=value;cout<<value<<" pushed\n";}}}
// Push: O(1). Space: O(MAX).
