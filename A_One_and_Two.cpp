#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        unordered_map<int,int>counter;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            counter[arr[i]]++;
        }

        if(counter[2]%2!=0){
            cout<<-1<<endl;
        }
        else{
            int twofreq=counter[2];
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]==2){
                    c++;
                }
                if(c==twofreq-c){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }


    }
}