#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        // cout<<t<<" ";
        int n;
        cin>>n;
        
        vector<int>arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if(n<3){
            cout<<"YES"<<endl;
            continue;
        }
        
        if(n==3){
            if(arr[0]==arr[1] || arr[1]==arr[2] || arr[0]==arr[2]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        
        unordered_map<int,int>counter;
        
        for(int i=0;i<n;i++){
            counter[arr[i]]++;
        }
        
        int mx=0;
        int other=0;
        
        if(counter.size()>2){
            cout<<"NO"<<endl;
        }
        else if(counter.size()==1){
            cout<<"YES"<<endl;
        }
        else{
            sort(arr.begin(),arr.end());
            int sm=arr[0];
            int lr=arr[n-1];
            if(abs(counter[lr]-counter[sm])<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}