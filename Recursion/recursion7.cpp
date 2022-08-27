#include <iostream>
using namespace std;

    // traverse of array elements with recursion function
    void traverseArr(int arr[],int lastIndex){
        if(lastIndex < 0){
            return;
        }

        cout<<"LastIndex: "<<lastIndex <<endl;
        traverseArr(arr,lastIndex-1);
        cout<<arr[lastIndex]<<" ";
    }


    // Sum of arr elements with recursion function
    int sunOfArr(int arr[],int lastIndex){
        if(lastIndex < 0){
            return 0;
        }
        
        cout<<"LastIndex: "<<lastIndex <<endl;
        int elements = arr[lastIndex];
        int trav = sunOfArr(arr,lastIndex-1);
        int result = elements + trav;
        cout<<"Element : " << elements << " Trav : " << trav << " Result : " << result <<endl;
        return result;
        // return arr[lastIndex] +  sunOfArr(arr,lastIndex - 1);
        
    }

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // traverseArr(arr,n-1);
     cout<<sunOfArr(arr,n-1);


    return 0;
}