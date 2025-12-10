#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        // int n,k;
        // cin>>n>>k;

        // vector<int>arr(n);
        // long long sum=0;

        // for(int i=0;i<n;i++){
        //     cin>>arr[i];
        //     sum+=arr[i];
        // }

        // sort(arr.begin(),arr.end());

        // int l=0,r=n-1;

        // while(l<r && k){
        //     if(arr[l]+arr[l+1]<arr[r]){
        //         sum-=arr[l]+arr[l+1];
        //         l+=2;
        //     }
        //     else{
        //         sum-=arr[r];
        //         r--;
        //     }
        //     k--;
        // }

        // cout<<sum<<endl;

        int n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        long long total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total += arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + arr[i - 1];
        }
        long long min_removed = LLONG_MAX;
        for (int x = 0; x <= k; x++) {
            int y = k - x;
            if (2 * x > n || y > n) continue;
            long long removed = prefix[2 * x] + (total - prefix[n - y]);
            if (removed < min_removed) min_removed = removed;
        }
        cout << (total - min_removed) << '\n';
    }
}