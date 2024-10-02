#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.pop();

    cout << "q.size(): " << q.size();
    cout << "\nq.front(): " << q.front();
    cout << "\nq.back(): " << q.back();
    cout <<endl;

    cout << "Queue is: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}