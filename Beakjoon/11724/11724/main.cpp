//
//  main.cpp
//  11724
//  연결요소개수
//  Created by deok9 on 2017. 11. 29..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> v[1001];
bool check[1001];

void dfs(int n){
    check[n]=true;
    for(int i=0;i<v[n].size();i++){
        if(!check[v[n][i]]){
            dfs(v[n][i]);
        }
    }
}

int main(int argc, const char * argv[]) {
    freopen("/users/deok9/desktop/input.txt","r",stdin);
    int N,M,a,b;
    int cnt=0;
    cin>>N>>M;
    
    for(int i=0;i<M;i++){
        cin>>a>>b;
        v[a].emplace_back(b);
        v[b].emplace_back(a);
    }
    for(int i=1;i<=N;i++){
        if(!check[i]){
            dfs(i);
            cnt+=1;
        }
    }
    cout<<cnt<<'\n';
    
    return 0;
}
