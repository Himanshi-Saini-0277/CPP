#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int isOperator(char ch){
    if (ch == '*' || ch == '^' || ch == '/' || ch == '+' || ch == '-' || ch == '(' || ch == ')'){
        return 1;
    }
    return 0;
}

int prec(char ch){
    if(ch == '^'){
        return 4;
    }
    else if(ch == '*' || ch == '/'){
        return 3;
    }
    else if(ch == '+' || ch == '-'){
        return 2;
    }
    return 0;
}

void display(stack <char> stk){
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
}

void prefix(const char* c){
    stack<char> stk1;
    stack<char> stk2;
    int i=0;

    string ch(c);
    reverse(ch.begin(), ch.end());
    
    for (int i = 0; i < ch.length(); i++) {
        if (ch[i] == '(') ch[i] = ')';
        else if (ch[i] == ')') ch[i] = '(';
    }

    while(ch[i] != '\0'){
        if(isalpha(ch[i])){
            stk2.push(ch[i]);
            i++;
        }
        else if(ch[i] == '('){
            stk1.push(ch[i]);
            i++;
        }
        else if(ch[i] == ')'){
            while(!stk1.empty() && stk1.top() != '('){
                stk2.push(stk1.top());
                stk1.pop();
            }
            stk1.pop();
            i++;
        }
        else if(isOperator(ch[i])){
            while(! stk1.empty() && prec(ch[i]) <= prec(stk1.top())){
                stk2.push(stk1.top());
                stk1.pop();
            }
            stk1.push(ch[i]);
            i++;
        }
    }

    while(!stk1.empty()){
        stk2.push(stk1.top());
        stk1.pop();
    }
    display(stk2);
}

int main(){
    const char* exp = "(a-b)*(d/e)";
    prefix(exp);

    return 0;
}