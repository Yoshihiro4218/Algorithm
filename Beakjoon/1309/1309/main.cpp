//
//  main.cpp
//  1309
//  동물원
//  Created by deok9 on 2018. 3. 5..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;

int dp[100001][3]={0};
int main(int argc, const char * argv[]) {
    int inNum;
    dp[1][0]=1;
    dp[1][1]=1;
    dp[1][2]=1;
    
    cin>>inNum;
    
    for(int i=2;i<=inNum;i++){
        dp[i][0] = dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
        dp[i][1] = dp[i-1][0]+dp[i-1][2];
        dp[i][2] = dp[i-1][0]+dp[i-1][1];
        dp[i][0]%=9901;
        dp[i][1]%=9901;
        dp[i][2]%=9901;
    }
    
    cout<<(dp[inNum][0]+dp[inNum][1]+dp[inNum][2])%9901<<'\n';
    
    return 0;
}
