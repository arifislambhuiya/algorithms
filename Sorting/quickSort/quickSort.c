#include<stdio.h>

int partition(int arr[],int low,int high){
    int pivot  = arr[high];
    int i = low-1;
    for(int j= low;j<high;j++){
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
        int pidx = partition(arr,low,high);
        quickSort(arr,low,pidx-1);
        quickSort(arr,pidx+1,high);
    }
}



int main(){
int arr[] = {4,7,5,3,6,2};
int n = sizeof(arr)/sizeof(arr[0]);

quickSort(arr,0,n-1);

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}