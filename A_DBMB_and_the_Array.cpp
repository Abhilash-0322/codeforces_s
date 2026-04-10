#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,s,x;
        cin>>n>>s>>x;

        vector<int>arr(n);
        int sum=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        s-=sum;

        if(s<0){
            cout<<"NO"<<endl;
            continue;
        }
        // cout<<sum<<endl;

        if(s==0 || (s%x==0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        // for(int i=0;i<n;i++){
            
        // }
    }
}