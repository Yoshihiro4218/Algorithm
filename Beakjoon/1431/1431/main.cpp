//
//  main.cpp
//  1431
//  시리얼 번호
//  Created by deok9 on 2018. 6. 1..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int strSum(string sCon){
    int sum=0;
    for(auto x:sCon){
        if((int)x>=48&&(int)x<=57)
            sum+=(int)x-48;
    }
    return sum;
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase;
    string s;
    vector<string> v;
    
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        cin>>s;
        v.emplace_back(s);
    }
    sort(v.begin(),v.end());
    stable_sort(v.begin(), v.end(), [](string a,string b){
        if(a.size()==b.size())
            return strSum(a)<strSum(b);
        else{
            return a.size()<b.size();
        }
        
    });
    for(auto x: v){
        cout<<x<<'\n';
    }
    
    return 0;
}
