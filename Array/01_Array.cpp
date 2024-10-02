#include <iostream>
using namespace std;

int main(){
    int size;
    cout<< "Enter size: ";
    cin>> size;

    int arr[size];
    for (int i =0; i<size; i++){
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout<< "Array is: ";
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }
}