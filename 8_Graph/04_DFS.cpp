#include<iostream>
#include<vector>
using namespace std;

void add(vector<int> adj[], int v, int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int V){
    for(int i=0; i<V; i++){
        cout << "vertex "<< i << ": ";
        for(auto x : adj[i]){
            cout << x << ", ";
        }
        cout << endl;
    }
}

void DFSUtil(vector<int> adj[], vector<bool> visited, int node){
    visited[node] = true;
    cout << node << " ";

    for(auto neighbor : adj[node]){
        if(!visited[neighbor]){
            DFSUtil(adj, visited, neighbor);
        }
    }
}

void DFS(vector<int> adj[], int V, int start){
    vector<bool> visited(V, false);
    DFSUtil(adj, visited, start);
    cout<<endl;
}

int main(){
    int V = 5;
    vector<int> adj[V];

    add(adj, 0, 1);
    add(adj, 0, 3);
    add(adj, 1, 2);
    add(adj, 2, 4);

    print(adj, V);

    cout<< "DFS: ";
    DFS(adj, V, 0);
    
    return 0;
}