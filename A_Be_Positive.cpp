#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        int negs=0;
        long long ans=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==-1){
                negs++;
            }
            else if(arr[i]==0){
                ans++;
            }
        }

        
        if(negs%2!=0){
            ans+=2;
        }

        cout<<ans<<endl;
    }
}