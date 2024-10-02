#include<iostream>
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

void inorder (struct Node* root){
    if(root != NULL){
        inorder (root->left);
        cout << root->data << " ";
        inorder(root->right);
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

    inorder(a);
    
    return 0;
}