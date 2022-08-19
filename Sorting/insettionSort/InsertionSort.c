#include<stdio.h>
 void insertionSort(int arr[],int n){
    for(int i = 1;i<n;i++){
            int curr = arr[i];
            int j = i-1;
            while(j>=0 && curr < arr[j]){
                arr[j+1] = arr[j];
                j--;
            }
      arr[j+1] = curr;
    }
 }


int main(){
 
 int arr[] = {4,6,3,2,7,9,7};
 int n = sizeof(arr)/sizeof(arr[0]);
 insertionSort(arr, n);
 
 for(int i = 0; i < n; i++){
    printf("%d ",arr[i]);
 }
    return 0;
}