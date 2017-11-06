//
//  main.cpp
//  9012
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
    
    int tCase;
    string input,res="YES";
    vector<char> s;
    
    cin>>tCase;
    while(tCase--){
        cin>>input;
        for(char x : input){
            if(x == '('){
                s.emplace_back('(');
            }else{
                if(s.empty()){
                    res = "NO";
                    break;
                }else{
                    s.pop_back();
                }
            }
        }
        if(res=="YES"&&s.size()!=0)
            res = "NO";
        cout<<res<<'\n';
        s.clear();
        res = "YES";
        
    }
    return 0;
}
