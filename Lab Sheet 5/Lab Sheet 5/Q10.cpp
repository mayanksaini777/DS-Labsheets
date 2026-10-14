// Q10. Evaluate a space-separated Postfix expression using a Stack.
#include <cctype>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
using namespace std;
int main(){string line,token;getline(cin,line);stringstream input(line);stack<long long>s;while(input>>token){if(token.size()>1||(isdigit(static_cast<unsigned char>(token[0])))){s.push(stoll(token));continue;}if(s.size()<2){cout<<"Invalid expression";return 0;}long long b=s.top();s.pop();long long a=s.top();s.pop();switch(token[0]){case '+':s.push(a+b);break;case '-':s.push(a-b);break;case '*':s.push(a*b);break;case '/':if(b==0){cout<<"Division by zero";return 0;}s.push(a/b);break;default:cout<<"Unsupported operator";return 0;}}if(s.size()!=1)cout<<"Invalid expression";else cout<<s.top();}
// Time: O(n). Space: O(n). Enter tokens separated by spaces; supports +, -, *, /.
