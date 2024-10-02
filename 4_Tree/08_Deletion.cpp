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

struct Node* inOrderPredecessor(struct Node* root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
};

struct Node* deletion(struct Node* root, int element){
    struct Node* prev;
    if(root == NULL) {
        return NULL;
    }
    if(element < root->data){
        root->left = deletion(root->left, element);
    }
    else if (element > root->data){
        root->right = deletion(root->right, element);
    }

    else{
        if (root->left == NULL) {
            struct Node* temp = root->right;
            delete root;
            return temp;
        } 
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            delete root;
            return temp;
        }
        prev = inOrderPredecessor(root);
        root->data = prev->data;
        root->left = deletion(root->left, prev->data);
    }
    return root;
};

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

    deletion(a, 3);
    inorder(a);
    cout << endl;
    
    return 0;
}