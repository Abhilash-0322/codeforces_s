#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;

        int ans=0;

        ans=max(ans,abs(x1-x2));
        ans=max(ans,abs(x3-x2));
        ans=max(ans,abs(x1-x3));

        cout<<ans<<endl;
    }
}