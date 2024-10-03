#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void print(struct Node* & head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void start(struct Node* & head, int value){
    Node* ptr = new Node();
    ptr->data = value;
    ptr->next = head;
    head = ptr;
}

void end(struct Node* & head, int value){
    Node* ptr = new Node();
    ptr->data = value;
    ptr->next = NULL;

    Node* p = head;

    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
}

void index(struct Node* & head, int value, int index){
    Node* ptr = new Node();
    ptr->data = value;
    int i =0;
    Node* p = head;

    while(i != index){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
}

void after(struct Node* & head, int value, struct Node* & pre){
    Node* ptr = new Node();
    ptr->data = value;
    ptr->next = pre->next;
    pre->next = ptr;
}

int main(){
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();

    a->data = 2;
    b->data = 3;
    c->data = 4;
    d->data = 5;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Node* ptr = new Node();
    ptr = a;

    start(a, 1);
    print(a);

    end(a, 6);
    print(a);

    index(a, 3, 1);
    print(a);

    after(a, 2, c);
    print(a);

    return 0;
}