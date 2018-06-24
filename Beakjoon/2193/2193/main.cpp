//
//  main.cpp
//  2193
//
//  Created by deok9 on 2017. 11. 14..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    //freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int N;
    pair<long long int, long long int> p;
    vector<pair<long long int, long long int>> v;
    
    cin>>N;
    
    p.first = 0;
    p.second = 0;
    v.emplace_back(p);
    p.first = 0;
    p.second = 1;
    v.emplace_back(p);
    p.first = 1;
    p.second = 0;
    v.emplace_back(p);
    for(int i=3;i<=N;i++){
        p.first = v[i-1].first+v[i-1].second;
        p.second = v[i-1].first;
        v.emplace_back(p);
    }
    
    cout<<v[N].first+v[N].second<<'\n';
    
        
    return 0;
}
