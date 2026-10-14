// Q7. Reverse a string using a Stack.
#include <iostream>
#include <string>
using namespace std;
int main(){string text;getline(cin,text);char* s=new char[text.size()];int top=-1;for(char c:text)s[++top]=c;while(top>=0)cout<<s[top--];delete[] s;}
// Time: O(n). Space: O(n).
