//
//  main.cpp
//  1377-2
//
//  Created by deok9 on 2017. 11. 7..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    vector<pair<int,int>> v;
    pair<int,int> a;
    int tCase,max=0;
    cin>>tCase;

    for(int i=0;i<tCase;i++){
        cin>>a.first;
        a.second = i;
        v.emplace_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<tCase;i++){
        if(v[i].second-i>max)
           max = v[i].second-i;
    }
    cout<<max+1<<'\n';
    return 0;
}
