#include <iostream>
using namespace std;

void search(int arr[], int size, int element){
    for(int i=0; i<size; i++){
        if (arr[i] == element){
            cout << "Found at index: "<< i;
        }
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    search (arr, 6, 4);
}