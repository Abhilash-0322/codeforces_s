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
        
        int l=0;
        int r=n-1;
        
        while(l<r){
            if(s[l]!=s[r]){
                r--;
                l++;
            }
            else{
                break;
            }
        }
        
        string ans="";
        
        for(int i=l;i<=r;i++){
            ans+=s[i];
        }
        
        cout<<ans.length()<<endl;
    }
}