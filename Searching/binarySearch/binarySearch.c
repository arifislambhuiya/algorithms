#include<stdio.h>

int binary_search(int arr[],int x,int n){
    int left,right;
    left = 0;
    right = n-1;
    
    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == x)return mid;
        if(arr[mid] < x)
        left = mid + 1;
        else
        right = mid - 1;
    }

    return -1;
}

int main(){

int arr[] = {1,2,3,4,5,6,22,45,67,100};
int n = sizeof(arr)/sizeof(arr[0]);
int x = 22;
int result = binary_search(arr,x,n);
(result == -1)
? printf("Elements not found")
: printf("Elements found at index : %d",result);

    return 0;
}