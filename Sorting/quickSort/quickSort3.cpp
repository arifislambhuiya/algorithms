#include<iostream>
using namespace std;

    int partition(int arr[],int low,int high){
        int pivot = arr[high];
        int i = low - 1;
        for(int j = low; j < high;j++){
            if(arr[j]<pivot){
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;
        return i;
    }

    

    void quickSort(int arr[],int low,int high){
        if(low<high){
            int p = partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }

    void printArr(int arr[],int n){
        for(int i = 0; i < n; i++){
            cout<<arr[i]<< " ";
        }
    }

int main(){

    int arr [] = {4,3,6,8,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printArr(arr,n);

    return 0;
}