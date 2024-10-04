#include<iostream>
#include<list>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

int main(){
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();

    a->data = 1;
    b->data = 2;
    c->data = 3;
    d->data = 4;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    Node* ptr = new Node();
    ptr = a;

    while(ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    list<int> l;
    l.push_back(5);
    l.push_back(6);
    l.push_front(2);
    l.push_front(1);

    for(int element : l){
        cout << element << " ";
    }
    cout << endl;

    l.pop_back();
    l.pop_front();

    for(int element : l){
        cout << element << " ";
    }
    cout << endl;

    return 0;
}