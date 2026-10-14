#include <iostream>
using namespace std;
// Q11. Find the maximum and minimum elements in a Queue.
int main(){int n;cin>>n;if(n<=0){cout<<"Queue is Empty";return 0;}int x;cin>>x;int minimum=x,maximum=x;for(int i=1;i<n;i++){cin>>x;if(x<minimum)minimum=x;if(x>maximum)maximum=x;}cout<<"Minimum="<<minimum<<" Maximum="<<maximum;}
// Find minimum/maximum: O(n). Auxiliary space: O(1).
