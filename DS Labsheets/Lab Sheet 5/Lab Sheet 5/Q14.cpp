// Q14. Demonstrate Stack use in recursion.
#include <iostream>
using namespace std;
void trace(int n){if(n==0)return;cout<<"Call "<<n<<'\n';trace(n-1);cout<<"Return "<<n<<'\n';}
int main(){int n;cin>>n;trace(n);}
// Time: O(n). Recursion stack space: O(n).
