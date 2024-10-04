#include<iostream>
using namespace std;

void print(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int r, int mid){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[l+i];
    }
    for(int j=0; j<n2; j++){
        b[j] = arr[mid+1+j];
    }

    int i=0, j=0, k=l;

    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else{
            arr[k] = b[j];
            k++; j++;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        i++; k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++; k++;
    }
}

void sort(int arr[], int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        sort(arr, l, mid);
        sort(arr, mid+1, r);

        merge(arr, l, r, mid);
    }
}

int main(){
    int arr[] = {5,2,4,1,7,3,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr, 0, size-1);
    print(arr, size);

    return 0;
}