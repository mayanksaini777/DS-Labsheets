#include <iostream>
#include <vector>
using namespace std;
struct Node{int data;Node*left;Node*right;Node(int x):data(x),left(nullptr),right(nullptr){}};
Node* buildTree(const vector<int>&v){if(v.empty()||v[0]==-1)return nullptr;vector<Node*>nodes(v.size(),nullptr);nodes[0]=new Node(v[0]);for(size_t i=0;i<v.size();i++)if(nodes[i]){size_t l=2*i+1,r=2*i+2;if(l<v.size()&&v[l]!=-1)nodes[l]=new Node(v[l]);if(r<v.size()&&v[r]!=-1)nodes[r]=new Node(v[r]);if(l<v.size())nodes[i]->left=nodes[l];if(r<v.size())nodes[i]->right=nodes[r];}return nodes[0];}
void freeTree(Node*n){if(!n)return;freeTree(n->left);freeTree(n->right);delete n;}
void inorder(Node*n){if(n){inorder(n->left);cout<<n->data<<' ';inorder(n->right);}}
void preorder(Node*n){if(n){cout<<n->data<<' ';preorder(n->left);preorder(n->right);}}
void postorder(Node*n){if(n){postorder(n->left);postorder(n->right);cout<<n->data<<' ';}}
// Q21. Count the leaf nodes in a Binary Tree.
int countLeaves(Node*n){if(!n)return 0;if(!n->left&&!n->right)return 1;return countLeaves(n->left)+countLeaves(n->right);}
int main(){int n;cin>>n;vector<int>v(n);for(int&x:v)cin>>x;Node*root=buildTree(v);cout<<"Number of leaf nodes: "<<countLeaves(root);freeTree(root);}
// Time: O(n). Recursion space: O(h).
