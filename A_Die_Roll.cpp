#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x,y;
    cin>>x>>y;

    int mx=max(x,y);
    int dot=mx;
    
    int numer=(6-dot)+1;

    int deno=6;

    if(deno%numer==0){
        deno=deno/numer;
        numer=1;
    }
    // if(deno%3==0 && numer%2==0){

    // }
    if(deno%2==0 && numer%2==0){
        deno/=2;
        numer/=2;
    }

    cout<<numer<<"/"<<deno<<endl;
}