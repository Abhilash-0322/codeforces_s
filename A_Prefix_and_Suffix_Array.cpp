#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        
        vector<string>pals((2*(n)-2));
        string x="",y="";
        
        
        for(int i=0;i<((2*n)-2);i++){
            
            string s;
            
            cin>>pals[i];
            
            s=pals[i];
            
            if(s.length()==n-1){
                if(x==""){
                    x=s;
                }
                else{
                    y=s;
                }
            }
            
        }
        reverse(y.begin(),y.end());
        if(x==y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}