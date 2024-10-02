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

bool isBST(struct Node* root, int min, int max){
    if (root == NULL) return true;
    if (root->data <= min || root->data >= max) return false;

    return (root->left, min, root->data) && (root->right, root->data, max);
    
}

int main(){
    Node* b = new Node(2);
    Node* a = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

    a->left = b;
    a->right = c;
    c->right = d;

    inorder(a);
    cout << endl;

    if (isBST(a, 2, 5)) {
        cout << "The tree is a BST" << endl;
    } else {
        cout << "The tree is NOT a BST" << endl;
    }
    
    return 0;
}