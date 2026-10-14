// Q8. Check balanced parentheses using a Stack.
#include <iostream>
#include <string>
using namespace std;
bool matches(char open,char close){return(open=='('&&close==')')||(open=='['&&close==']')||(open=='{'&&close=='}');}
int main(){string expression;getline(cin,expression);char* s=new char[expression.size()];int top=-1;bool balanced=true;for(char c:expression){if(c=='('||c=='['||c=='{')s[++top]=c;else if(c==')'||c==']'||c=='}'){if(top==-1||!matches(s[top],c)){balanced=false;break;}top--;}}if(top!=-1)balanced=false;cout<<(balanced?"Balanced":"Not Balanced");delete[] s;}
// Time: O(n). Space: O(n).
