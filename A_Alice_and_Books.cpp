#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        // unordered_map<int,int>uniquer;
        // vector<int>uniques;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            // uniquer[arr[i]]++;
            // if(uniquer[arr[i]]==1){
            //     uniques.push_back(arr[i]);
            // }
        }

        long long max_prev = *max_element(arr.begin(), arr.begin() + n - 1);
        long long ans = max_prev + arr[n - 1];
        cout << ans << endl;
        
        // sort(uniques.begin(),uniques.end(),greater<>());
        // sort(arr.rbegin(),arr.rend());

        // long long ans=0;

        // long long ans = arr[0];
        // if (n >= 2) {
        //     ans += arr[1];
        // }
        // cout << ans << endl;

        // if (uniques.size() == 1) {
        //     if(n>1){
        //         ans=arr[0]+arr[1];
        //     }
        //     else{
        //         ans = uniques[0];
        //     }
        // }
        // else {
        //     ans = uniques[0] + uniques[1];
        // }
        // cout << ans << endl;
    }
}