#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.emplace(5);
    stk.emplace(6);

    cout << stk.size() <<endl;

    while(! stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}