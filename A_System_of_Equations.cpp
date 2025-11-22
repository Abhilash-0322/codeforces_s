#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;

    long long a=0,b=0;
    long long count=0;

    for(long long i=0;i<=n;i++){
        for(long long j=0;j<=m;j++){
            if((i*i+j==n) && (j*j+i==m)){
                count++;
            }
        }
    }
    
    cout<<count<<endl;
}