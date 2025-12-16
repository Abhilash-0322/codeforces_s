#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n+1);

        for(int i=n;i>0;i--){
            arr[n-i+1]=i;
            // cout<<i<<" ";
        }

        if(n%2!=0){
            swap(arr[(n/2)+1],arr[(n/2)]);
        }

        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }   
}