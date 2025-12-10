#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr((n*(n-1))/2);

        for(int i=0;i<(n*(n-1))/2;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        int idx=0;

        vector<int>ans;
        int goo=n-1;

        while(idx<(n*(n-1))/2){
            ans.push_back(arr[idx]);
            idx+=goo;
            goo--;
        }

        ans.push_back(arr.back());

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }
}