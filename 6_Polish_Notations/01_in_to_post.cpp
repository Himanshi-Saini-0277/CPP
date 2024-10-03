#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int isOperator(char ch){
    if (ch == '*' || ch == '^' || ch == '/' || ch == '+' || ch == '-'){
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

void display(queue <char> q){
    cout << "Queue is: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void postfix(const char* ch){
    stack<char> stk;
    queue<char> q;
    int i=0;
    while(ch[i] != '\0'){
        if(isalpha(ch[i])){
            q.push(ch[i]);
            i++;
        }
        else if(isOperator(ch[i])){
            while(! stk.empty() && prec(ch[i]) <= prec(stk.top())){
                q.push(stk.top());
                stk.pop();
            }
            stk.push(ch[i]);
            i++;
        }
    }

    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }
    display(q);
}

int main(){
    const char* exp = "a/b^c-d";
    postfix(exp);

    return 0;
}