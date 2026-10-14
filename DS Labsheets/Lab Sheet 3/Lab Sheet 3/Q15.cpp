// Q15. Test last-pivot Quick Sort on sorted, reverse-sorted, and shuffled arrays.
#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>
using namespace std;
long long comparisons=0,partitions=0;
int partitionArray(vector<int>&a,int l,int h){int pivot=a[h],i=l-1;for(int j=l;j<h;j++){comparisons++;if(a[j]<=pivot)swap(a[++i],a[j]);}swap(a[i+1],a[h]);partitions++;return i+1;}
void quickSort(vector<int>&a,int l,int h){if(l<h){int p=partitionArray(a,l,h);quickSort(a,l,p-1);quickSort(a,p+1,h);}}
void test(const string&label,vector<int>a){comparisons=partitions=0;quickSort(a,0,(int)a.size()-1);cout<<label<<": comparisons="<<comparisons<<", partitions="<<partitions<<'\n';}
int main(){int n;cin>>n;vector<int>sorted(n);iota(sorted.begin(),sorted.end(),1);vector<int>reversed=sorted;reverse(reversed.begin(),reversed.end());vector<int>randomized=sorted;mt19937 rng(42);shuffle(randomized.begin(),randomized.end(),rng);test("Sorted",sorted);test("Reverse-sorted",reversed);test("Shuffled",randomized);}
// Last-element pivot can cause O(n^2) time on sorted or reverse-sorted input; average time is O(n log n).
// Average recursion space: O(log n); worst recursion space: O(n).
