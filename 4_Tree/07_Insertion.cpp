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

void insertion(struct Node* root, int element){
    struct Node* prev = NULL;
    while (root != NULL){
        prev = root;
        if (element == root->data){
            cout << "Can't insert" << endl;
        }
        else if (element > root->data){
            root = root->right;
        }
        else{
            root = root->left;
        }
    }
    Node* n = new Node(element);
    if (prev->data < element){
        prev->right = n;
    }
    else{
        prev->left = n;
    }
}

int main(){
    Node* b = new Node(1);
    Node* a = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

    a->left = b;
    a->right = c;
    c->right = d;

    inorder(a);
    cout << endl;

    insertion(a, 2);
    inorder(a);
    cout << endl;
    
    return 0;
}