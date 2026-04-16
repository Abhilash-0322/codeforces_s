#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        
        int mid=(n+1)/2;

        vector<int>arr;



        for(int i=n;i>=1;i--){
            arr.push_back(i);
        }

        for(auto it: arr){
            cout<<it<<" ";
        }

        cout<<endl;
    }
}