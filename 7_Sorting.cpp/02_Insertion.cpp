#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {5,3,4,7,2,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    print(arr, size);

    return 0;
}