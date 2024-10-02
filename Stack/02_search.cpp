#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void search (stack<int, vector<int>> stk, int element){
    int index = stk.size()-1;

    while(!stk.empty()){
        if(stk.top() == element){
            cout << "Found at: " << index <<endl;
            break;
        }
        stk.pop();
        index--;
    }
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    stack<int, vector<int>> stk(vec);

    cout << stk.size() <<endl;
    search(stk, 4);

    while(! stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout <<endl;

    return 0;
}