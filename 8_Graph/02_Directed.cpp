#include<iostream>
#include<vector>
using namespace std;

void add(vector<int> vec[], int v, int u){
    vec[v].push_back(u);
}

void print(vector<int> vec[], int V){
    for(int i=0; i<V; i++){
        cout << "Index " << i << ": ";
        for(auto x: vec[i]){
            cout << "-> " << x;
        }
        cout << endl;
    }
}

int main(){
    int V = 5;
    vector<int> vec[V];

    add(vec, 0, 1);
    add(vec, 0, 3);
    add(vec, 1, 2);
    add(vec, 2, 4);
    
    print(vec, V);

    return 0;
}