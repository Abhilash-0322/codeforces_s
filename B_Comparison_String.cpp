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

        // unordered_map<int,int>elems;

        // int dval=1;
        // elems[dval]++;
        int maxc=1;
        int c=1;

        for(int i=0;i<s.length()-1;i++){
            // if(s[i]=='<'){
            //     dval++;
            // }
            // else{
            //     dval--;
            // }
            // elems[dval]++;
            if(s[i]==s[i+1]){
                c++;
                maxc=max(maxc,c);
            }
            else{
                c=1;
            }
        }

        cout<<maxc+1<<endl;
    }
}