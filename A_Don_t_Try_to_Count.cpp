#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        
        string x;
        cin>>x;
        
        string s;
        cin>>s;
        
        int ops=0;
        
        if(x.find(s) != string::npos){
            cout<<ops<<endl;
            continue;
        }
        
        string ss=x+x;
        
        if((ss).find(s)!=string::npos){
            cout<<++ops<<endl;
            continue;
        }
        
        while(x.length() <= s.length() * 2) {
            ops++;
            x += x;
            if(x.find(s) != string::npos) {
                break;
            }
        }

        if(x.find(s) == string::npos) ops = -1;

        cout << ops <<endl;
    }
}