// #include<bits/stdc++.h>
// using namespace std;

// bool extrementsround(int n){
//     string su=to_string(n);

//     // int count=0;
//     for(int i=1;i<su.length();i++){
//         if(su[i]!='0'){
//             return false;
//         }
//     }

//     return true;
// }

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         int count=0;

//         for(int i=1;i<=n;i++){
//             if(extrementsround(i)){
//                 count++;
//             }
//         }

//         cout<<count<<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int exr=0;
        int nzd=0;
        
        while(n){
            string ns=to_string(n);
            nzd=0;
            
            // sort(ns.begin(), ns.end(),greater<>());
            
            for(int i=0;i<ns.length();i++){
                if(ns[i]!='0'){
                    nzd++;
                }
            }
            
            if(nzd==1){
                exr++;
            }
            n--;
        }
        
        cout<<exr<<endl;
    }
}