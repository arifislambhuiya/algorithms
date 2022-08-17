#include <iostream>
using namespace std;

void revString(string str){
    if(str.length() == 0) return;

    string ros = str.substr(1);
    revString(ros);
    cout<<str[0];

}

int main(){
    string str = "Bangladesh";
    revString(str);
    return 0;
}