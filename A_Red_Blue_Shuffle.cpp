#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        // vector<int>r(n);
        // vector<int>b(n);

        // for(int i=0;i<n;i++){
        //     cin>>r[i];
        // }

        // for(int i=0;i<n;i++){
        //     cin>>b[i];
        // }
        string r;
        cin>>r;

        string b;
        cin>>b;

        // int winner=0;

        int rs=0,bs=0;

        for(int i=0;i<n;i++){
            // if(r[i]>b[i]){
            //    rs++; 
            // }
            // if(r[i]<b[i]){
            //     bs++;
            // }
            rs+=r[i]-'0';
            bs+=b[i]-'0';
        }
        // cout<<rs<<" "<<bs;

        // if(winner==1){
        //     cout<<"RED"<<endl;
        // }
        // else if(winner==2){
        //     cout<<"BLUE"<<endl;
        // }
        // else{
        //     cout<<"EQUAL"<<endl;
        // }

        if(rs>bs){
            cout<<"RED"<<endl;
        }
        else if(rs<bs){
            cout<<"BLUE"<<endl;
        }
        else{
            cout<<"EQUAL"<<endl;
        }
    }
}