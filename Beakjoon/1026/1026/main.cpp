//
//  main.cpp
//  1026
//
//  Created by deok9 on 2017. 11. 17..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    int tCase,inNum,result=0;
    vector<int> v1,v2;
    
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        cin>>inNum;
        v1.emplace_back(inNum);
    }
    for(int i=0;i<tCase;i++){
        cin>>inNum;
        v2.emplace_back(inNum);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end(),[](int a, int b){
        return a>b;
    });
    
    for(int i=0;i<tCase;i++){
        result+=v1[i]*v2[i];
    }
    cout<<result<<'\n';
    return 0;
}
