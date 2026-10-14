#include <iostream>
using namespace std;
struct Node{int data;Node*left;Node*right;Node(int x):data(x),left(nullptr),right(nullptr){}};
Node*insert(Node*r,int x){if(!r)return new Node(x);if(x<r->data)r->left=insert(r->left,x);else if(x>r->data)r->right=insert(r->right,x);return r;}
bool search(Node*r,int x){if(!r)return false;if(x==r->data)return true;return x<r->data?search(r->left,x):search(r->right,x);}
void inorder(Node*r){if(r){inorder(r->left);cout<<r->data<<' ';inorder(r->right);}}
void preorder(Node*r){if(r){cout<<r->data<<' ';preorder(r->left);preorder(r->right);}}
void postorder(Node*r){if(r){postorder(r->left);postorder(r->right);cout<<r->data<<' ';}}
void clear(Node*r){if(r){clear(r->left);clear(r->right);delete r;}}
// Q22. Menu-driven BST: Insert, Search, traversals, Delete, Height, Count, Exit.
Node*minimum(Node*r){while(r&&r->left)r=r->left;return r;}
Node*erase(Node*r,int key){if(!r)return nullptr;if(key<r->data)r->left=erase(r->left,key);else if(key>r->data)r->right=erase(r->right,key);else{if(!r->left){Node*t=r->right;delete r;return t;}if(!r->right){Node*t=r->left;delete r;return t;}Node*s=minimum(r->right);r->data=s->data;r->right=erase(r->right,s->data);}return r;}
int height(Node*r){if(!r)return 0;int a=height(r->left),b=height(r->right);return 1+(a>b?a:b);}
int count(Node*r){return r?1+count(r->left)+count(r->right):0;}
int main(){Node*root=nullptr;int c,x;do{cout<<"1 Insert 2 Search 3 Inorder 4 Preorder 5 Postorder 6 Delete 7 Height 8 Count Nodes 9 Exit\n";cin>>c;switch(c){case 1:cin>>x;root=insert(root,x);break;case 2:cin>>x;cout<<(search(root,x)?"Found\n":"Not found\n");break;case 3:inorder(root);cout<<'\n';break;case 4:preorder(root);cout<<'\n';break;case 5:postorder(root);cout<<'\n';break;case 6:cin>>x;root=erase(root,x);break;case 7:cout<<"Height: "<<height(root)<<'\n';break;case 8:cout<<"Nodes: "<<count(root)<<'\n';break;case 9:break;default:cout<<"Invalid choice\n";}}while(c!=9);clear(root);}
// Insert/Search/Delete: O(log n) average, O(n) worst. Traversals/Count/Height: O(n). Space: O(n).
