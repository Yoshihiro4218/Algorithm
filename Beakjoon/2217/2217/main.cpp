//
//  main.cpp
//  2217
//
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int inCase,inNum,max=0;
    vector<int> v;
    
    cin>>inCase;
    for(int i=0;i<inCase;i++){
        cin>>inNum;
        v.emplace_back(inNum);
    }
    sort(v.begin(),v.end(),[](int a, int b) {
        return (a>b);
    });
    
    for(int i=0;i<inCase;i++){
        if(max<v[i]*(i+1))
            max = v[i]*(i+1);
    }
    cout<<max<<'\n';
    
    return 0;
}
