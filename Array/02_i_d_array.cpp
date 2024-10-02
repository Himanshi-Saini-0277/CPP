#include <iostream>
using namespace std;

void insert(int arr[], int index, int size, int element){
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}

void del(int arr[], int index, int size){
    for(int i=index; i<size; i++){
        arr[i] = arr[i+1];
    }
}

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,2,4,5,6};
    print(arr, 5);
    insert(arr, 2, 6, 3);
    print(arr, 6);
    del(arr, 5, 6);
    print(arr, 5);
}