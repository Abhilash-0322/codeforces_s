#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        int ydiff=d-b;
        
        if(ydiff<0){
            cout<<-1<<endl;
            continue;
        }
        
        a+=ydiff;
         
        if(a>=c){
            cout<<ydiff+a-c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}