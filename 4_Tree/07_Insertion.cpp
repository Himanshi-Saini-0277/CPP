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
    Node* b = new Node(2);
    Node* a = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);

    a->left = b;
    a->right = c;
    c->right = d;

    inorder(a);
    cout << endl;

    insertion(a, 1);
    inorder(a);
    cout << endl;
    
    return 0;
}