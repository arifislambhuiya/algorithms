#include <stdio.h>
void selectionSort2(int arr[],int n ){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min = j;
        }
        if(min != i){
            temp=arr[i];
            arr[i]= arr[min];
            arr[min]= temp;
        }
    }
}


int main(){
 int arr[] = {1,34,5,6,99,8};
 int n = sizeof(arr)/sizeof(arr[0]);
 selectionSort2(arr,n);
 for (int i=0; i<n; i++){
     printf("%d\n",arr[i]);

 }
    return 0;
}