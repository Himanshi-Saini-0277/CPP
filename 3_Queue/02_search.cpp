#include<iostream>
#include<queue>
using namespace std;

void search(queue<int> &q, int element){
    int index = 0;

    while(!q.empty()){
        if(q.front() == element){
            cout << "Found at index: " << index <<endl;
        }
        q.pop();
        index++;
    }
}

int main(){
    queue<int> q({1, 2, 3, 4, 5});
    search(q, 4);

    return 0;
}