#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&arr,int n){
    if(n<1){
        return;
    }

    if(abs(arr[n]-arr[n-1])==1){

    }

    if((arr[n]%7)%(arr[n-1]%7)==0){
        
    }


    solve(arr,n-1);
}

int ans=0;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    solve(arr,n-1);


}