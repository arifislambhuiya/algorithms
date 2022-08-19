#include <iostream>
using namespace std;


void selectionSort(int arr[], int n){
    for(int i =0 ;i<n-1;i++){
        int smallest = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
 int arr[] = {5,43,28,4,5};
 int n = sizeof(arr)/sizeof(arr[0]);
 selectionSort(arr,n);
 printArr(arr,n);


    return 0;
}