#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>arr(n);
        int total=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            total+=arr[i];
        }

        if(total%2==1){
            cout<<"YES"<<endl;
            continue;
        }

        if((n*k)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
}