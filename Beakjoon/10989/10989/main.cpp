//
//  main.cpp
//  10989
//
//  Created by deok9 on 2017. 11. 22..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    int inNum,tCase;
    vector<int> v(10001);
    
    cin>>tCase;
    while(tCase--){
        cin>>inNum;
        v[inNum]++;
    }
    for(int i=1;i<=10000;i++){
        while(v[i]--)
            cout<<i<<'\n';
    }
    
    return 0;
}
