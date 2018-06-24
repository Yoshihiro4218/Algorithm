//
//  main.cpp
//  11726
//
//  Created by deok9 on 2017. 11. 7..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int dp[1001];
int sol(int n){
    if(dp[n]!=0) return dp[n];
    else dp[n] = (sol(n-2)+sol(n-1))%10007;
    return dp[n];
}
int main(int argc, const char * argv[]) {
    int inNum;
    for(int i=0;i<1002;i++){
        dp[i]=0;
    }
    dp[1]=1;
    dp[2]=2;
    cin>>inNum;
    cout<<sol(inNum)<<'\n';
    
    return 0;
}
