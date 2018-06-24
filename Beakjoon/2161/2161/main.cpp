//
//  main.cpp
//  2161
//  카드1
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int tCase;
    vector<int> v,ans;
    
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        v.emplace_back(i+1);
    }
    while(v.size()!=1){
        ans.emplace_back(*v.begin());
        v.erase(v.begin());
        v.emplace_back(*v.begin());
        v.erase(v.begin());
    }
    for(auto x:ans)
        cout<<x<<" ";
    cout<<v[0]<<'\n';
    
    return 0;
}
