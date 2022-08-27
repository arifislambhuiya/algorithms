#include<iostream>
using namespace std;

// sum of digit recursion function
    int sumOfDigit(int number){
        if(number == 0) return 0;

        // return number % 10 + sumOfDigit(number/10);
        int remainder = number % 10;
        int n = sumOfDigit(number/10);
        int result = remainder + n;
        return result;

    }

 int main(){
    cout<<sumOfDigit(1234);


    return 0;
}