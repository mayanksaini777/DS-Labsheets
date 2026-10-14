// Q11. Convert an infix expression to prefix using Stacks.
#include <algorithm>
#include <cctype>
#include <cctype>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int prec(char c){if(c=='^')return 3;if(c=='*'||c=='/')return 2;if(c=='+'||c=='-')return 1;return 0;}
int main(){string in;getline(cin,in);string rev;for(auto it=in.rbegin();it!=in.rend();++it){if(*it=='(')rev+=')';else if(*it==')')rev+='(';else if(*it!=' ')rev+=*it;}stack<char>s;string post;for(char c:rev){if(isalnum(static_cast<unsigned char>(c)))post+=c;else if(c=='(')s.push(c);else if(c==')'){while(!s.empty()&&s.top()!='('){post+=s.top();s.pop();}if(!s.empty())s.pop();}else{while(!s.empty()&&s.top()!='('&&(prec(s.top())>prec(c)||(prec(s.top())==prec(c)&&c=='^'))){post+=s.top();s.pop();}s.push(c);}}while(!s.empty()){post+=s.top();s.pop();}reverse(post.begin(),post.end());cout<<post;}
// Time: O(n). Space: O(n). Supports single-character operands and +, -, *, /, ^.
