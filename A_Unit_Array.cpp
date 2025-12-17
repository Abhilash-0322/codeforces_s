#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);

        int ones=0,mones=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1){
                ones++;
            }
            else{
                mones++;
            }
        }

        int ops=0;

        if(mones>ones){
            ops=mones-ones;
            ops--;
        }

        if((mones-ops)%2!=0){
            ops++;
        }

        cout<<ops<<endl;
    }
}