#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int ops=0;
        bool failed=false;
        
        for(int i=n-1;i>=1;i--){
            if(arr[i]==0){
                failed=true;
                break;
            }
            while(arr[i-1]>=arr[i]){
                arr[i-1]=arr[i-1]/2;
                ops++;
            }
        }

        if(failed){
            cout<<-1<<endl;
            continue;
        }
        
        cout<<ops<<endl;
    }
}