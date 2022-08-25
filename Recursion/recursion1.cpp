#include<iostream>
using namespace std;
// print number 1 to 10;
    void printNumber(int n){
        if(n==0){
            return;
        }

        cout<<n<<" ";
        printNumber(n-1);
        cout<<n<<" ";
    }

// print even number
void printEvenNumber(int n){
    if(n==0){
        return;
    }

    printEvenNumber(n-2);
    cout<<n<<" ";
}


// print odd number
void printOddNumber(int n){
    if(n < 0){
        return;
    }

   printOddNumber(n-2);
   cout<<n<<" ";
}


int main(){

    // printNumber(10);
    // printEvenNumber(10);
    printOddNumber(5);

    return 0;
}