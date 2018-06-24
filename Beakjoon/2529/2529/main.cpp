//
//  main.cpp
//  2529
//
//  Created by deok9 on 2018. 6. 4..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    
    int l=0,r=0,tCase;
    vector<char> v(10);
    cin>>tCase;
    
    for(int i=0;i<tCase;i++){
        cin>>v[i];
        if(v[i]=='<')
            r+=1;
        else
            l+=1;
    }
    
    
    
    
    return 0;
}
