#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int>arr(n);
    unordered_map<int,vector<int>>poses;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        poses[arr[i]].push_back(i+1);
    }
    
    int q;
    cin>>q;
    
    vector<int>queries(q);
    
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
    
    long long vashya = 0, petya = 0;

    for (int i = 0; i < q; i++) {
        int val = queries[i];
        if (poses.count(val)) {
            vashya += poses[val][0];
            petya +=n-(poses[val].back())+1;
        }
    }
    
    cout<<vashya<<" "<<petya<<endl;
}