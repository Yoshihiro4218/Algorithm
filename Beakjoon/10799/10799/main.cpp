//
//  main.cpp
//  10799
//
//  Created by deok9 on 2017. 11. 6..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    
    //Mark Var
    string input;
    vector<int> v;
    int cnt = 0;
    
    // input & Algorithm
    cin>>input;
    for(int i=0;i<input.size();i++){
        if(input[i]=='('){
            v.emplace_back(i);
        }else{
            if(v.back()+1==i){
                cnt+=(v.size()-1);
            }else{
                cnt+=1;
            }
            v.pop_back();
        }
    }
    cout<<cnt<<'\n';
    
    return 0;
}
