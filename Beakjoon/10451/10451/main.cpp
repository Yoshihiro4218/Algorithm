//
//  main.cpp
//  10451
//
//  Created by deok9 on 2017. 11. 30..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
vector<int> v;
bool chk[1001];
void dfs(int n){
    chk[n]=true;
    if(!chk[v[n]])
        dfs(v[n]);
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/Desktop/input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int tCase,M,inNum,cnt=0;
    cin>>tCase;
    while(tCase--){
        memset(chk, false, sizeof(chk));
        v.emplace_back(0);
        cin>>M;
        while(M--){
            cin>>inNum;
            v.emplace_back(inNum);
        }
        for(int i=1;i<v.size();i++){
            if(chk[v[i]]==false){
                dfs(v[i]);
                cnt++;
            }
        }
        cout<<cnt<<'\n';
        v.clear();
        cnt=0;
    }
    
    return 0;
}
