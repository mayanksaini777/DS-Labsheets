#include <iostream>
using namespace std;
// Q9. Count the elements currently present in a Queue.
int main(){int n;cin>>n;int* q=new int[n];for(int i=0;i<n;i++)cin>>q[i];cout<<"Number of elements: "<<n;delete[] q;}
// Count: O(1) when Front and Rear are maintained. Space: O(n) for queue storage.
