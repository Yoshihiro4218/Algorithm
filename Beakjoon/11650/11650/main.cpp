//
//  main.cpp
//  11650
//  좌표 정렬하기
//  Created by deok9 on 2017. 11. 22..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first==b.first)
        return a.second<b.second;
    else
        return a.first<b.first;
}
int main(int argc, const char * argv[]) {
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
    sort(v.begin(),v.end(),cmp);
    for(pair<int,int> p : v){
        cout<<p.first<<" "<<p.second<<'\n';
    }
    
    return 0;
}
