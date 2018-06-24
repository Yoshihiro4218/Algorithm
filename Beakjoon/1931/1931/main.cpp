//
//  main.cpp
//  1931
//
//  Created by deok9 on 2018. 6. 5..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int n,inFir,inSec;
    vector<pair<int,int>> v;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>inFir>>inSec;
        v.emplace_back(make_pair(inFir, inSec));
    }
    sort(v.begin(),v.end());
    
    for(auto x : v){
        cout<<x.first<<" "<<x.second<<'\n';
    }
    
    
    return 0;
}
