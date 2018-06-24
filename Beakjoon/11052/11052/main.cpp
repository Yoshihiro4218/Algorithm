//
//  main.cpp
//  11052
//
//  Created by deok9 on 2017. 11. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int tCase,inNum,result=0;
    vector<int> dp(1001),v;
    cin>>tCase;
    
    v.emplace_back(0);
    for(int i=0;i<tCase;i++){
        cin>>inNum;
        v.emplace_back(inNum);
        dp[i+1] = inNum;
    }
    
    for(int i=1;i<=tCase;i++){
        for(int j=1;j<=i;j++){
            dp[i] = max(dp[i-j]+v[j],dp[i]);
        }
        result = max(dp[i],result);
    }
    
    cout<<result<<'\n';
    
    
    return 0;
}
