//
//  main.cpp
//  1181
//  단어정렬
//  Created by deok9 on 2018. 3. 10..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    vector<vector<string>> v(51);
    string inStr;
    int inNum;
    
    cin>>inNum;
    for(int i=0;i<inNum;i++){
        cin>>inStr;
        v[inStr.size()].emplace_back(inStr);
    }
    
    for(int i=0;i<51;i++){
        sort(v[i].begin(),v[i].end());
        for(auto j=v[i].begin();j!=v[i].end();++j){
            if(j==v[i].begin()||*j!=*(j-1))
                cout<<*j<<'\n';
        }
    }
    
    return 0;
}
