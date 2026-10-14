// Q15. Analyze Push, Pop, Peek, and Display operation costs.
#include <iostream>
using namespace std;
int main(){const int MAX=100;int a[MAX],top=-1,n;cin>>n;for(int i=0;i<n&&i<MAX;i++)a[++top]=i+1;long long pushWrites=1,popReads=1,peekReads=1,displayReads=0;if(top>=0){--top;int value=a[top+1];(void)value;int peekValue=a[top];(void)peekValue;for(int i=top;i>=0;i--)displayReads++;}cout<<"Push: O(1), array writes="<<pushWrites<<'\n';cout<<"Pop: O(1), array reads="<<popReads<<'\n';cout<<"Peek: O(1), array reads="<<peekReads<<'\n';cout<<"Display: O(n), elements visited="<<displayReads<<'\n';cout<<"Auxiliary space: O(1); stack storage: O(MAX)";}
// Push/Pop/Peek: O(1). Display: O(n). Stack storage: O(MAX).
