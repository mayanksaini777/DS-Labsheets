#include <iostream>
using namespace std;
// Q15. Compare Linear Queue and Circular Queue space use and operations.
int main(){const int MAX=5;int linear[MAX],lr=-1;for(int x=1;x<=MAX;x++)linear[++lr]=x;if(lr==MAX-1)cout<<"Linear Queue: cannot enqueue after one dequeue; rear reached array end.\n";int circular[MAX],cr=-1,count=0;for(int x=1;x<=MAX;x++){cr=(cr+1)%MAX;circular[cr]=x;count++;}count--;if(count<MAX){cr=(cr+1)%MAX;circular[cr]=6;count++;cout<<"Circular Queue: enqueued 6 after dequeue; reusable capacity used.\n";}cout<<"Both Enqueue/Dequeue: O(1); Display: O(n).\nLinear queue may waste free slots at the front; circular queue reuses them. Both use O(MAX) array space.";}
// Operations: O(1) enqueue/dequeue, O(n) display. Space: O(MAX).
