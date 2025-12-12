#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;

        if(n%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        
        if((k%2==0)){
            if(n%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(n>=k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;   
            }
        }
    }
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (k % 2 == 0) {
            // k and 2 are both even; n must be even
            if (n % 2 == 0) cout << "YES\n";
            else cout << "NO\n";
        } else {
            // k is odd
            if (n % 2 == 0) {
                cout << "YES\n";   // even n always possible
            } else {
                // odd n requires at least one k-coin
                if (n >= k) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }
}