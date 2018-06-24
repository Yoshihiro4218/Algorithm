//
//  main.cpp
//  1377
//
//  Created by deok9 on 2017. 11. 6..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    
    int tCase=0,input,max=0;
    cin>>tCase;
    vector<vector<int>> v;
    vector<int> temp;
    
    for(int i=0;i<tCase;i++){
        cin>>input;
        temp.emplace_back(input);
        temp.emplace_back(i);
        v.emplace_back(temp);
        temp.clear();
    }
    sort(v.begin(),v.end());
    for(int i=0;i<tCase;i++){
        if(v[i][1]-i>max)
            max = v[i][1]-i;
    }

    cout<<max+1<<'\n';
    
    return 0;
}
