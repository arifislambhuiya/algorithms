#include <iostream>
using namespace std;

void recurBubble(int arr[],int n){
     if(n == 0 || n ==1){
            return;
        }
    for(int i = 0; i < n-1; i++){
       if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    recurBubble(arr,n-1);
 } 
}

void printArr(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
 int arr[] = {4,5,7,5,2,4};
 int n = sizeof(arr)/sizeof(arr[0]);
 recurBubble(arr, n);
 printArr(arr,n);



    return 0;
}