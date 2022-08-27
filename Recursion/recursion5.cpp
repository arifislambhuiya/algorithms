#include<iostream>
using namespace std;

    int power(int x, int n){
        if(n==0){
            return 1;
        }

        int result = x * power(x,n-1);
        cout << " X = " << x << " N = " << n << " Result = " << result << endl;
        return result;
    }

int main(){
    cout<<power(10,3);

    return 0;
}