#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        string n1=to_string(x);
        unordered_map<char,int>easy;
        for(int j=0;j<n1.length();j++){
            easy[n1[j]]++;
        }

        for(int i=0;1;i++){
            string n2=to_string(i);
            bool found=false;
            for(int j=0;j<n2.length();j++){
                if(easy[n2[j]]){
                    found=true;
                    cout<<i<<endl;
                    break;
                }
            }
            if(found){
                break;
            }
        }
    }
}