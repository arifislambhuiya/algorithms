#include<stdio.h>

int linearSearch(int arr[],int x,int n){
   for(int i=0;i<n; i++){
       if(arr[i] == x)
       return i;
   }
  return -1;
}

int main(){

int arr [] = {2,5,7,9,11,23,45};
int x = 11;
int n = sizeof(arr)/sizeof(arr[0]);
int result = linearSearch(arr,x,n);
(result == -1)
?printf("Elements not found")
:printf("Elements found: %d\n",result);
    return 0;
}