#include <iostream>
using namespace std;

    int partition(int arr[],int low,int high){
        int pivot = arr[high];
        int i = low-1;
        for(int j = low; j < high;j++){
            if(arr[j] < pivot){
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[high] = temp;

        return i;
    }

    void quickSort(int arr[],int low,int high){
        if(low<high){
            int pidx = partition(arr,low,high);
            quickSort(arr,low,pidx-1);
            quickSort(arr,pidx+1,high);
        }
    }
    void printArr(int arr[],int n){
        for(int i= 0;i<n;i++){
            cout << arr[i] <<" ";
        }
    }

int main(){

    int arr[] = {3,4,2,7,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printArr(arr,n);
    
    return 0;
}