#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>temp(n);

        int sum=0;

        for(int i=0;i<n;i++){
            cin>>temp[i];
            sum+=temp[i];
        }

        unordered_map<int,int>winners;

        auto arr=temp;

        for(int i=0;i<n;i++){
            int sumcopy=sum;
            
            int j=0;
            while(sumcopy>0){
                if(arr[(j%n)+1]>0){
                    sumcopy--;
                    arr[(j%n)+1]--;
                }
                j++;
            }
            winners[j]++;
        }

        cout<<winners.size()<<endl;
    }
}




        // char c = p.first;

        // char mirror = c;
        // if (c >= 'a' && c <= 'z') {
        //     mirror = 'z' - (c - 'a');
        // } 
        // else if (c >= '0' && c <= '9') {
        //     mirror = '9' - (c - '0');
        // }

        
        // if (c > mirror) continue;

        // ans += abs(freq[c] - freq[mirror]);