#include <iostream>
using namespace std;
struct Node{int data;Node*left;Node*right;Node(int x):data(x),left(nullptr),right(nullptr){}};
Node*insert(Node*r,int x){if(!r)return new Node(x);if(x<r->data)r->left=insert(r->left,x);else if(x>r->data)r->right=insert(r->right,x);return r;}
bool search(Node*r,int x){if(!r)return false;if(x==r->data)return true;return x<r->data?search(r->left,x):search(r->right,x);}
void inorder(Node*r){if(r){inorder(r->left);cout<<r->data<<' ';inorder(r->right);}}
void preorder(Node*r){if(r){cout<<r->data<<' ';preorder(r->left);preorder(r->right);}}
void postorder(Node*r){if(r){postorder(r->left);postorder(r->right);cout<<r->data<<' ';}}
void clear(Node*r){if(r){clear(r->left);clear(r->right);delete r;}}
// Q16. Delete a leaf node from a Binary Search Tree.
Node*deleteLeaf(Node*r,int key,bool&deleted){if(!r)return nullptr;if(key<r->data)r->left=deleteLeaf(r->left,key,deleted);else if(key>r->data)r->right=deleteLeaf(r->right,key,deleted);else if(!r->left&&!r->right){delete r;deleted=true;return nullptr;}return r;}
int main(){int n,x,key;cin>>n;Node*root=nullptr;for(int i=0;i<n;i++){cin>>x;root=insert(root,x);}cin>>key;bool deleted=false;root=deleteLeaf(root,key,deleted);cout<<(deleted?"Leaf deleted\n":"Key is not a leaf or was not found\n");inorder(root);clear(root);}
// Delete: O(log n) average, O(n) worst. Space: O(h) recursion.
