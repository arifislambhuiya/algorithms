#include <iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i = 0;i<n; i++){
        int curr = arr[i];
        int j = i-1;
        while(j>=0 && curr < arr[j]){
            arr[j+1] = arr[j];
            j--;
    }
    arr[j+1] = curr;
}
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {5,4,3,8,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    printArr(arr,n);

    return 0;
}