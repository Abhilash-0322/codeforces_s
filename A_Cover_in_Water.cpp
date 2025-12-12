#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;  

        int ops=0;

        for(int i=0;i<n;i++){
            if(i==0 && s[i]=='.'){
                ops++;
            }
            else if(i==n-1 && s[i]=='.'){
                ops++;
            }
            else if(i>0 && s[i]=='.' && s[i-1]=='#'){
                ops++;
            }
            else if(i<n-1 && s[i]=='.' && s[i+1]=='#'){
                ops++;
            }
        }

        cout<<ops<<endl;
    }
}