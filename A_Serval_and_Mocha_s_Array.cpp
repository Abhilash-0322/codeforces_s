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

        // int lcm=__gcd(arr[0],arr[1]);
        bool beautiful=true;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])>arr.size()){
                    beautiful=false;
                    break;
                }
            //    lcm=max(lcm,__gcd(arr[i],arr[j])); 
            }
        }

        if(beautiful){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}