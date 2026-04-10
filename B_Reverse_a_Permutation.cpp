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

        int v=n;
        int l=0;

        while(l < n && arr[l]==v){
            l++;
            v--;
        }

        // int r=l;

        // int v2=v-1;

        // if(l==0){
        //     v2=n;
        // }

        // while(r < n && arr[r]!=v2){
        //     r++;
        // }

        // reverse(arr.begin()+l,arr.begin()+r);

        if(l < n){
            // Find position of the value we want
            int target = n - l;
            int j = l;

            while(arr[j] != target){
                j++;
            }

            reverse(arr.begin() + l, arr.begin() + j + 1);
        }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
        // int l=0,r=0;

        // for(int i=1;i<n;i++){
        //     if(arr[i-1]<arr[i]){
        //         // l=i;
        //     }
        // } 
    }
}