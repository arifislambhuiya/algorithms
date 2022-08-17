#include<stdio.h>

void bubbleSort3(int arr[],int n){
    int i,j,temp;

    for(i=0;i<n-1;i++){

       for(j = i+1;j < n-i-1;j++){

           if(arr[j] > arr[j+1])

           temp = arr[j];
           arr[j] = arr[ j+ 1];
           arr[j+ 1] = temp;
       }
    }
}


void printArr(int arr[],int n){

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


int main(){

 int arr[] = {3,46,5,9,4};
 int n  = sizeof(arr)/sizeof(arr[0]);
 bubbleSort3(arr,n);
 printArr(arr,n);
    return 0;

}