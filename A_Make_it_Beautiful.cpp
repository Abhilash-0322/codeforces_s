#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        multiset<int> arr(a.begin(), a.end());

        int l=0,r=n-1;

        vector<int>ans;
        int sum=0;

        bool possible=true;

        while(!arr.empty()){
            bool placed=false;
            // if(sum!=arr[l]){
            //     sum+=arr[l];
            //     ans.push_back(arr[l]);
            //     l++;
            // }
            // else{
            //     if(sum==arr[r]){
            //         possible=false;
            //         break;
            //     }
            //     sum+=arr[r];
            //     ans.push_back(arr[r]);
            //     r--;
            // }

            for (auto it = arr.begin(); it != arr.end(); ++it) {
                if (*it != sum) {
                    ans.push_back(*it);
                    sum += *it;
                    arr.erase(it);
                    placed = true;
                    break;
                }
            }
            if (!placed) {
                possible = false;
                break;
            }
        }

        if(possible){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}