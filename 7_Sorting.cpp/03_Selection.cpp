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
        int index = i;
        for (int j=i+1; j<size; j++){
            if(arr[j] < arr[index]){
                index = j;                
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main(){
    int arr[] = {5,3,4,7,2,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, size);
    print(arr, size);

    return 0;
}