#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0; i<n-1; i++){
        int smallest = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

int main(){
 
 int arr[] = {4,5,6,3,6,1};
 int n = sizeof(arr)/sizeof(arr[0]);
 selectionSort(arr,n);

 for(int i = 0; i < n; i++){
    cout << arr[i]<<" ";
 }

    return 0;
}