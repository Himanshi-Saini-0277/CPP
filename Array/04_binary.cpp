#include <iostream>
using namespace std;

void sort(int arr[], int size){
    for (int j=0; j<size; j++){
        for (int i=0; i<size; i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

void search(int arr[], int size, int element){
    int min = 0;
    int max = size-1;

    if (element != arr[min] && element != arr[max]){
        int mid = (min + max)/2;
        if (element = arr[mid]){
            cout << "Found at index: "<< mid << endl;
        }
        else if (element < arr[max]){
            max = mid;
            mid = (min+max)/2;
        }
        else if (element > arr[min]){
            min = mid;
            mid = (min+max)/2;
        }
    }
}

int main(){
    int arr[6] = {1,3,5,2,4,6};
    sort (arr, 6);
    print (arr, 6);
    search (arr, 6, 4);
}