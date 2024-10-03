#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int size){
    for (int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5,3,4,7,2,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    print(arr, size);

    return 0;
}