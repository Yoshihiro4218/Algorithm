//
//  main.cpp
//  1547
//
//  Created by deok9 on 2018. 6. 7..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> v = {make_pair(1, 1),make_pair(2, 2),make_pair(3, 3)};
void change(int a, int b){
    int tmp = v[a-1].second;
    v[a-1].second = v[b-1].second;
    v[b-1].second = tmp;
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase,cho[2];
    cin>>tCase;
    while(tCase--){
        cin>>cho[0]>>cho[1];
        change(cho[0],cho[1]);
    }
    for(auto x:v){
        if(x.second==1)
            cout<<x.first<<'\n';
    }
    return 0;
}
