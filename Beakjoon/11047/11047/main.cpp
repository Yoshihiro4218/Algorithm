//
//  main.cpp
//  11047
//
//  Created by deok9 on 2018. 1. 3..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int N,K,temp,cnt=0;
    vector<int> v;
    cin>>N>>K;
    
    while(N--){
        cin>>temp;
        v.emplace_back(temp);
    }
    
    for(int i=1;i<=v.size();i++){
        cnt+=K/v[v.size()-i];
        cout<<v[v.size()-i]<<'\n';
        K%=v[v.size()-i];
    }
    
    cout<<cnt<<'\n';
    return 0;
}
