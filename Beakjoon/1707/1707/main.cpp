//
//  main.cpp
//  1707
//
//  Created by deok9 on 2017. 11. 29..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
vector<int> v[1001];
int chk[1001];
void dfs(int n,int col){
    chk[n] = col;
    for(int i=0;i<v[n].size();i++){
        if(chk[v[n][i]]==0)
            dfs(v[n][i],3-col);
    }
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase;
    int M,N,a,b,cnt=0;
    string res = "YES";
    
    cin>>tCase;
    
    while(tCase--){
        memset(chk,0,sizeof(chk));
        cin>>M>>N;
        for(int i=0;i<N;i++){
            cin>>a>>b;
            v[a].emplace_back(b);
            v[b].emplace_back(a);
        }
        dfs(1,1);
        for(int i=1;i<M;i++){
            for(int j=0;j<v[i].size();j++){
                if(chk[i]==chk[v[i][j]]){
                    res = "NO";
                    break;
                }
            }
        }
        for(int x=1;x<=M;x++){
            cout<<chk[x]<<" ";
        }cout<<'\n';
        
        cout<<res<<'\n';
        if(tCase!=0){
            for(int i=1;i<=M;i++){
                v[i].clear();
            }
        }
        res = "YES";
    }
    
    return 0;
}
