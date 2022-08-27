#include<iostream>
using namespace std;

    // Reverse arr number with recursion function
    void reverse(int arr[],int firstIndex,int lastIndex){
        if(firstIndex > lastIndex){
            return;
        }

        int temp = arr[firstIndex];
        arr[firstIndex] = arr[lastIndex];
        arr[lastIndex] = temp;
        
        reverse(arr,firstIndex+1,lastIndex-1);
        cout<< arr<<endl;
    }


    // traverseArr with recursion function
      void traverseArr(int arr[],int lastIndex){
        if(lastIndex < 0){
            return;
        }

        cout<<"LastIndex: "<<lastIndex <<endl;
        traverseArr(arr,lastIndex-1);
        cout<<arr[lastIndex]<<" ";
    }


int main(){

    int arr[] = {1,2,3,4,5,6,7,8};
    int lastIndex = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,lastIndex-1);
    

    return 0;
}