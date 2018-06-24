//
//  main.cpp
//  11652
//
//  Created by deok9 on 2017. 11. 20..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    int tCase,cnt=1,maxSize=0;
    long long int inNum,bf,res=0;
    vector<long long int> v;
    cin>>tCase;
    while(tCase--){
        cin>>inNum;
        v.emplace_back(inNum);
    }
    sort(v.begin(),v.end());
    bf=v[0];
    res=v[0];
    for(int i=1;i<v.size();i++){
        if(bf==v[i])
            cnt++;
        else{
            if(maxSize<cnt){
                maxSize=cnt;
                res = bf;
            }
            bf=v[i];
            cnt=1;
        }
    }
    
    if(maxSize<cnt)
        res = *(--v.end());
    cout<<res<<'\n';
    return 0;
}
