#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>>enemy;

        for(int i=0;i<m;i++){
            int f,s;
            cin>>f>>s;
            enemy.push_back({f,s});
        }

        map<int,int>mapp;

        for(int i=0;i<enemy.size();i++){
            mapp[max(enemy[i][0],enemy[i][1])]=
            max(mapp[max(enemy[i][0],enemy[i][1])],min(enemy[i][0],enemy[i][1]));
        }
    }
}