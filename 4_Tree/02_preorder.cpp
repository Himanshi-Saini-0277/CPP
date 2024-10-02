#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int d){
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(struct Node* root){
    if(root != NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
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

    preorder(a);

    return 0;
}