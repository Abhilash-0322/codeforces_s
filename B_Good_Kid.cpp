#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);

        long long ans=1;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]){
                ans*=arr[i];
            }
        }

        sort(arr.begin(),arr.end());
        
        if(arr[0]){
            ans/=arr[0];
        }

        ans*=(arr[0]+1);

        if(n>1){
            if(arr[1]==0){
                ans=0;
            }
        }

        cout<<ans<<endl;
    }
}