#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int f, int r){
    int pivot = arr[r];
    int i = f;
    int j = r-1;

    do{
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while(i<j);

    int temp = arr[i];
    arr[i] = pivot;
    arr[r] = temp;
    return i;
}

void sort(int arr[], int f, int r){
    if(f<r){
        int p = partition(arr, f, r);
        sort(arr, f, p-1);
        sort (arr, p+1, r);
    }
}

int main(){
    int arr[] = {5,3,4,7,2,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, size);
    print(arr, size);

    return 0;
}