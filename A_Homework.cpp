#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string a;
        cin>>a;

        int m;
        cin>>m;

        string b;
        cin>>b;

        string c;
        cin>>c;

        bool dima=true;

        for(int i=0;i<m;i++){
            if(c[i]=='D'){
                a+=b[i];
            }
            else{
                a.insert(0,1,b[i]);
            }
            dima=!dima;
        }

        cout<<a<<endl;
    }
}