#include<bits/stdc++.h>
using namespace std;

bool extrementsround(int n){
    string su=to_string(n);

    // int count=0;
    for(int i=1;i<su.length();i++){
        if(su[i]!='0'){
            return false;
        }
    }

    return true;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int count=0;

        for(int i=1;i<=n;i++){
            if(extrementsround(i)){
                count++;
            }
        }

        cout<<count<<endl;
    }
}