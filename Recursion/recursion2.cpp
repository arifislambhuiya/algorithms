#include<iostream>
using namespace std;

//sum of number n;
    int sumOfNumber(int n){
        if(n==0){
            return 0;
        }
       return n + sumOfNumber(n-1);
    }


// sum of number m to n
    int sumOfNumber(int m,int n){
        if(m > n){
            return 0;
        }
        return m + sumOfNumber(m+1,n);
    }

int main(){
    //    cout<< sumOfNumber(5);
       cout<< sumOfNumber(1,5);
    return 0;
}