#include <iostream>
using namespace std;
    int gcd(int a,int b){
        cout<<"A = " << a << ", b = " << b << " A%B = "<< a%b <<endl;
        if(a%b == 0){
            return b;
        }

        return gcd(b,a%b);
    }

int main(){
    cout<<gcd(308,20);
    return 0;
}