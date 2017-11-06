//
//  main.cpp
//  2504
//
//  Created by deok9 on 2017. 10. 20..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int result = 0;
    char inChar;
    vector<char> v,cash;
    //INPUT ZONE
    while(cin>>inChar){
        v.emplace_back(inChar);
    }
    //Algorithm ZONE
    while(char x : v){
        if(x=='(')
            cash.emplace_back(')');
    }
    //OUTPUT zone
    
    return 0;
}
