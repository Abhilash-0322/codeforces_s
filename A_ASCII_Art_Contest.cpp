#include<bits/stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin>>t;

    // while(t--){
        int g,c,l;
        cin>>g>>c>>l;

        vector<int>arr={g,c,l};
        sort(arr.begin(),arr.end());

        if((arr[2]-arr[0])>9){
            cout<<"check again"<<endl;
            // continue;
        }
        else{
            cout<<"final"<<arr[1]<<endl;
        }
    // }
}