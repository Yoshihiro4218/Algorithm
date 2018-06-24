//
//  main.cpp
//  2156
//
//  Created by deok9 on 2018. 6. 2..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt", "r",stdin);
    
    int tCase,inNum;
    vector<int> v,ans;
    //InputZone
    cin>>tCase;
    v.emplace_back(0);
    for(int i=0;i<tCase;i++){
        cin>>inNum;
        v.emplace_back(inNum);
    }
    //AlgorithmZone
    ans.emplace_back(0);
    ans.emplace_back(v[1]);
    ans.emplace_back(v[1]+v[2]);
    for(int i=3;i<=tCase;i++)
        ans.emplace_back(max(ans[i-3]+v[i-1]+v[i],max(ans[i-1],ans[i-2]+v[i])));
    
    //OUTPUTZONE
    cout<<ans[tCase]<<'\n';
    return 0;
}
