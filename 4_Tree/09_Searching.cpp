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

void searching(struct Node* root, int element){
    if(root->data == element){
        cout << "Found" << endl;
    }
    else if(element > root->data){
        searching(root->right, element);
    }
    else{
        searching(root->left, element);
    }
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

    searching(a, 3);
    
    return 0;
}