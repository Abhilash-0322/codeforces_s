#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>b(n);

        long long total=0;

        for(int i=0;i<n;i++){
            cin>>b[i];
            total+=b[i];
        }
        if(total<n){
            cout<<1<<endl;
            continue;
        }

        cout<<total-n<<endl;
        // if(total == n)
        //     cout << 0 << '\n';
        // else if(total < n)
        //     cout << 1 << '\n';
        // else
        //     cout << total - n << '\n';
    }
}