//
//  main.cpp
//  1260
//
//  Created by deok9 on 2017. 11. 22..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
using namespace std;
vector<int> dp[10001];
int V;
bool check[10001];

void dfs(int cur){
    check[cur] = true;
    cout<<cur<<" ";
    for(int i=0;i<dp[cur].size();i++){
        if(check[dp[cur][i]]==false)
            dfs(dp[cur][i]);
    }
}

void bfs(int cur){
    queue<int> q;
    check[cur]=true;q.push(cur);
    while(!q.empty()){
        int x = q.front();q.pop();
        cout<<x<<" ";
        for(int i=0;i<dp[x].size();i++){
            if(check[dp[x][i]]==false)
                q.push(dp[x][i]);check[dp[x][i]]=true;
        }
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    
    int N,M,a,b;
    cin>>N>>M>>V;
    
    for(int i=0;i<M;i++){
        cin>>a>>b;
        dp[a].emplace_back(b);
        dp[b].emplace_back(a);
    }
    dfs(V);
    cout<<'\n';
    memset(check, false, sizeof(check));
    bfs(V);
    cout<<'\n';
    
    
    return 0;
}
