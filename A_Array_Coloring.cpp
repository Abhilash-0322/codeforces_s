#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        vector<long long>arr(n);
        long long sum=0LL;

        for(long long i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        if(sum%2LL==0LL){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}