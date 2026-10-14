// Q9. Convert an infix expression to postfix using a Stack.
#include <cctype>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int prec(char c){if(c=='^')return 3;if(c=='*'||c=='/')return 2;if(c=='+'||c=='-')return 1;return 0;}
int main(){string in,out;getline(cin,in);stack<char>s;for(char c:in){if(c==' ')continue;if(isalnum(static_cast<unsigned char>(c)))out+=c;else if(c=='(')s.push(c);else if(c==')'){while(!s.empty()&&s.top()!='('){out+=s.top();s.pop();}if(!s.empty())s.pop();}else{while(!s.empty()&&s.top()!='('&&(prec(s.top())>prec(c)||(prec(s.top())==prec(c)&&c!='^'))){out+=s.top();s.pop();}s.push(c);}}while(!s.empty()){if(s.top()!='(')out+=s.top();s.pop();}cout<<out;}
// Time: O(n). Space: O(n). Supports single-character operands and +, -, *, /, ^.
