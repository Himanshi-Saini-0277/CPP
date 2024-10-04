#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void add(vector<int> adj[], int v, int u){
    adj[v].push_back(u);
}

void print(vector<int> adj[], int V){
    for(int i=0; i<V; i++){
        cout << "Index " << i << ": ";
        for(auto x: adj[i]){
            cout << "-> " << x;
        }
        cout << endl;
    }
}

void TSUtil(vector<int> adj[], vector<bool> &visited, stack<int> &stk, int node){
    visited[node] = true;

    for(int neighbor: adj[node]){
        if(!visited[neighbor]){
            TSUtil(adj, visited, stk, neighbor);
        }
    }
    stk.push(node);
}

void TS(vector<int> adj[], int V){
    stack<int> stk;
    vector<bool> visited(V, false);

    for(int i=0; i<V; i++){
        if(!visited[i]){
            TSUtil(adj, visited, stk, i);
        }
    }

    cout << "Topological sort: ";

    while(!stk.empty()){
        cout << stk.top()<<" ";
        stk.pop();
    }
    cout <<endl;
}

int main(){
    int V = 5;
    vector<int> adj[V];

    add(adj, 0, 1);
    add(adj, 0, 3);
    add(adj, 1, 2);
    add(adj, 2, 4);
    
    print(adj, V);
    TS(adj, V);

    return 0;
}