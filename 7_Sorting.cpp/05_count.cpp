#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int size, int max){
    int c[max+1];
    int b[size];
    int i,j;

    for (i=0; i<=max; i++){
        c[i] =0;
    }
    for(j=0; j<size; j++){
        c[arr[j]]++;
    }
    for(i=1; i<=max; i++){
        c[i] += c[i-1];
    }
    for(i=size-1; i>=0; i--){
        b[c[arr[i]]-1] = arr[i];
        c[arr[i]]--;
    }
    for(j=0; j<size; j++){
        arr[j] = b[j];
    }
}

int main(){
    int arr[] = {6,0,2,0,1,3,4,6,1,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size, 6);
    print(arr, size);

    return 0;
}