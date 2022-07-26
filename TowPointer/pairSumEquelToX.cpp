//find the sum whose sum is equal to x

#include<bits/stdc++.h>
using namespace std;

bool solve(int arr[],int x,int n){
    int i = 0;
    int j = n-1;
    while(i < j){
        int sum = arr[i] +  arr[j];
        if (sum == x) return true;
        if (sum > x)j--;
        else i++;
    }
    return false;
}

int main(){

    int n ;
    cin >> n;
    int arr[n+1]; 
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr , arr+n);
    int x;
    cin >> x;
    bool ans = solve(arr,x,n);

    if(ans == true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}