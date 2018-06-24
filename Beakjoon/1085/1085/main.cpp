//
//  main.cpp
//  1085
//
//  Created by deok9 on 2018. 1. 17..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int x,y,w,h;
    int result;
    cin>>x>>y>>w>>h;
    
    result = min(y,h-y);
    result = min(result,x);
    result = min(result,w-x);
    
    cout<<result<<'\n';
    
    return 0;
}
