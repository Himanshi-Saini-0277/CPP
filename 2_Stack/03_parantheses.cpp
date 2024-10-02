#include<iostream>
#include<stack>
using namespace std;

int match(char a, char b){
    if (a == '(' && b ==')'){
        return 1;
    }
    if (a == '{' && b =='}'){
        return 1;
    }
    if (a == '[' && b ==']'){
        return 1;
    }
    return 0;
}

int parenthesis(stack<char> &stk, const char* exp){
    for(int i=0; exp[i]!='\0'; i++){
        if(exp[i] == '(' || exp[i] == '[' ||exp[i] == '{'){
            stk.push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == ']' ||exp[i] == '}'){
            if (stk.empty()) {
                return 0;
            }
            else if(match(stk.top(), exp[i])){
                stk.pop();
            }
            else{
                return 0;
            }
        }
    }
    if(exp[0] == '\0' && stk.empty()){
        return 1;
    }
    else if (stk.empty()) {
        return 1;
    } 
    else{
        return 0;
    }
    return 0;
}

int main(){
    const char* exp = "{[()]}";
    stack<char> stk;

    if (parenthesis(stk, exp)){
        cout<< "Parentheses are balanced" <<endl;
    }
    else {
        cout << "Parentheses are not balanced" <<endl;
    }

    cout << "Remaining stack elements: ";
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    return 0;
}