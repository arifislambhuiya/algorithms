#include <stdio.h>

void bubbleSort(int arr[],int n){
    int i,j,temp;

    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]  < arr[i]){
               temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
            }
        }
    }

}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

int arr[] = { 4,6,73,2,7};
int n = sizeof(arr)/sizeof(arr[0]);
bubbleSort(arr,n);
printArr(arr,n);
    return 0;
}