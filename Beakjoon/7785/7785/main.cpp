//
//  main.cpp
//  7785
//
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    vector<string> enter;
    vector<string> leave;
    int inNum,n=0;
    string inStr1,inStr2;
    
    cin>>inNum;
    
    while(inNum--){
        cin>>inStr1;
        cin>>inStr2;
        if(inStr2=="enter")
            enter.emplace_back(inStr1);
        else
            leave.emplace_back(inStr1);
    }
    sort(enter.begin(),enter.end());
    sort(leave.begin(),leave.end());
    
    for(int i=0;i<enter.size();i++){
        if(n==leave.size()){
            cout<<enter[enter.size()-i-1]<<'\n';
            continue;
        }
        if(leave[leave.size()-n-1]!=enter[enter.size()-i-1])
            cout<<enter[enter.size()-i-1]<<'\n';
        else
            n+=1;
    }
    
    return 0;
}
