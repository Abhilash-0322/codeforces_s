#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m,h;
        cin>>n>>m>>h;

        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int>b(m);
        vector<int>c(m);

        for(int i=0;i<m;i++){
            cin>>b[i];
            cin>>c[i];
        }
        
        for(int i=0;i<m;i++){
            int val=arr[b[i]]+c[i];
            if(val>h){
                continue;
            }
            arr[b[i]]=val;
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
}