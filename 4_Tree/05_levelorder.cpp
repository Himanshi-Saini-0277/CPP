#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left= nullptr;
        right =nullptr;
    }
};

void levelorder (struct Node* root){
    queue<Node*>q;
    q.push(root);

    while(! q.empty()){
        Node* node = q.front();
        q.pop();
        cout << node->data << " ";

        if(node->left != nullptr){
            q.push(node->left);
        }
        if(node->right != nullptr){
            q.push(node->right);
        }
    }
}

int main(){
    Node* a = new Node(2);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

    a->left = b;
    a->right = c;
    b->left = d;

    levelorder(a);
    
    return 0;
}