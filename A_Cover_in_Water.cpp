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
        int dots=0;
        bool two=false;

        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                dots++;
                if(dots==3){
                    two=true;
                }
            }
            else{
                dots=0;
            }

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

        if(two && ops>2){
            cout<<2<<endl;
        }
        else{
            cout<<ops<<endl;
        }
    }
}