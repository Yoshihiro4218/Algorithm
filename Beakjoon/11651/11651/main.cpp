//
//  main.cpp
//  11651
//  좌표정렬하기 2
//  Created by deok9 on 2017. 11. 22..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    int tCase,x,y;
    vector<pair<int,int>> v;
    pair<int,int> p;
    
    cin>>tCase;
    while(tCase--){
        cin>>x>>y;
        p.first = x;
        p.second = y;
        v.emplace_back(p);
    }
    sort(v.begin(),v.end(),[](const pair<int,int> &a,const pair<int,int> &b){
        return make_tuple(a.second,a.first)<make_tuple(b.second,b.first);
    });
    
    for(pair<int,int> ans : v){
        cout<<ans.first<<" "<<ans.second<<'\n';
    }
    
    return 0;
}
