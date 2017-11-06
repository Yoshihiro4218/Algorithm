//
//  main.cpp
//  1406
//
//  Created by deok9 on 2017. 11. 6..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    //Set Var
    string initStr;
    int tCase,cur;
    char op,inChar;
    vector<char> v1,v2;
    //input & Algorithm
    cin>>initStr;
    cin>>tCase;
    for(char x : initStr){
        v1.emplace_back(x);
    }
    cur = (int)initStr.size();
    while(tCase--){
        cin>>op;
        switch(op){
            case 'L':
                if(!v1.empty()){
                    v2.emplace_back(v1.back());
                    v1.pop_back();
                }
                break;
            case 'D':
                if(!v2.empty()){
                    v1.emplace_back(v2.back());
                    v2.pop_back();
                }
                break;
            case 'B':
                if(!v1.empty())
                    v1.pop_back();
                break;
            case 'P':
                cin>>inChar;
                v1.emplace_back(inChar);
                break;
        }
    }
    //OutPut Zone
    for(char x : v1)
        cout<<x;
    for(auto x = --v2.end();x!=--v2.begin();--x){
        cout<<*x;
    }cout<<'\n';
    
    return 0;
}
