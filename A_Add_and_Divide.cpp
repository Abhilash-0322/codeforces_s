#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        int ops=0;

        int ans = INT_MAX;

        for(int x = 0; x <= 40; x++){
            int bb = b + x;

            if(bb == 1) continue;

            int aa = a;
            int ops = x;

            while(aa > 0){
                aa /= bb;
                ops++;
            }

            ans = min(ans, ops);
        }

        // while(a>=b){
        //     if(a%b==0){
        //         b++;
        //     }
        //     else{
        //         a=a/b;
        //     }

        //     ops++;
        // }

        cout<<ans<<endl;
    }
}