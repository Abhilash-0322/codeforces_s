#include<bits/stdc++.h>
using namespace std;

// long long fact(){
//     return 0;
// }

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;

        long long maxsum=0;
        long long minsum=0;

        // for(int i=n;i>(n-k);i--){
            //     maxsum+=i;
            // }
        // maxsum=((k)*((2*n)-(k+1)))/2;
        maxsum = (k * (2 * n - k + 1)) / 2;

        // for(int i=1;i<=k;i++){
        //     minsum+=i;
        // }
        minsum=((k)*(1+k))/2;

        // cout<<maxsum<<endl;

        if((maxsum>=x) && (minsum<=x)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // if(x<=)
    }
}