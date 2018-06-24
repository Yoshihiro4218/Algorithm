//
//  main.cpp
//  1373
//
//  Created by deok9 on 2017. 11. 19..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    vector<char> v;
    vector<int> sol;
    char c;
    int cnt = 1,res=0;
    while(cin>>c){
        v.emplace_back(c);
    }
    reverse(v.begin(), v.end());
    for(char x : v){
        switch(cnt){
            case 1:
                res+=x-'0';
                break;
            case 2:
                res+=(x-'0')*2;
                break;
            case 3:
                res+=(int)(x-'0')*4;
                sol.emplace_back(res);
                res=0;
                break;
        }
        cnt=cnt!=3?cnt+1:1;
    }
    if(cnt!=1)
        sol.emplace_back(res);
    for(auto iter=--sol.end();iter!=(--sol.begin());--iter){
        cout<<*iter;
    }cout<<'\n';
    return 0;
}
