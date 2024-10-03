#include<iostream>
#include<list>
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

void start(struct Node* & head){
    head = head->next;
}

void end(struct Node* & head){
    Node* p = head;

    while(p->next->next != NULL){
        p = p->next;
    }
    p->next = NULL;
}

void index(struct Node* & head, int index){
    int i =0;
    Node* p = head;

    while(i != index){
        p = p->next;
        i++;
    }
    p->next = p->next->next;
}

void after(struct Node* & head, struct Node* & pre){
    pre->next = pre->next->next;
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

    start(a);
    print(a);

    end(a);
    print(a);

    index(a, 1);
    print(a);

    after(a, b);
    print(a);

    return 0;
}