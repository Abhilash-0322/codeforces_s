#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);

        int last=0;
        bool done=false;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(!done && last>arr[i]){
                cout<<0<<endl;
                done=true;
                // break;
            }
            last=arr[i];
        }

        if(done){
            continue;
        }

        if(n==2){
            if(arr[1]<arr[0]){
                cout<<0<<endl;
                continue;
            }
            else{
                cout<<(arr[1]-arr[0])/2+1<<endl;
            }
            done=true;
        }

        if(done){
            continue;
        }

        int d=INT_MAX;

        for(int i=0;i<n-1;i++){
            d=min(d,arr[i+1]-arr[i]);
        }

        cout<<(d/2)+1<<endl;
    }
}