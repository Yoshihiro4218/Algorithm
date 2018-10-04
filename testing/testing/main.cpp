//
//  main.cpp
//  testing
//
//  Created by deok9 on 2018. 8. 26..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase,tmp;
    vector<int> v;
    cin>>tCase;
    while(tCase--){
        cin>>tmp;
        v.emplace_back(tmp);
    }
    sort(v.begin(),v.end());
    for(int x : v){
        cout<<x<<'\n';
    }
    
    return 0;
}
