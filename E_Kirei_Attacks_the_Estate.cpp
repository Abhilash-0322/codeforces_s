#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>val(n);

        for(int i=0;i<n;i++){
            cin>>val[i];
        }

        vector<vector<int>>adj(n+1);

        for(int i=0;i<n;i++){
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<vector<int>>dp(n+1, vector<int>(3,-1));
        vector<int>ans;

        // solve(1,-1,adj,dp,ans);

        for(auto it: ans){
            cout<<it<<" ";
        }

        




    }
}