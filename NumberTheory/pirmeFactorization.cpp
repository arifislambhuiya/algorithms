#include <bits/stdc++.h>
using namespace std;

void primeFact(int n){

 for (int i = 2; i<=n; i++){

	if(n%i == 0){
		int count = 0 ;
		while(n%i == 0){
			count++;
			n= n/2;
		}
		cout<<i<<"^"<<count<<","<<;
	}
	if(n>1)cout<<"^"<<1<<endl;
else cout<<endl;
}


}

int main(){

   int n 44;
   primeFact(n);

	return 0;
}