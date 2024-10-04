#include<iostream>
#include<vector>
using namespace std;

void add(vector<int> adj[], int v, int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int h){
    for(int i=0; i<h; i++){
        cout << "vertex "<< i << ": ";
        for(auto x : adj[i]){
            cout << x << ", ";
        }
        cout << endl;
    }
}

int main(){
    int V = 5;
    vector<int> adj[V];

    add(adj, 0, 1);
    add(adj, 0, 2);
    add(adj, 0, 3);
    add(adj, 1, 2);
    add(adj, 2, 4);

    print(adj, V);
    
    return 0;
}