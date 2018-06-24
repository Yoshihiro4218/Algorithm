//
//  main.cpp
//  1541
//
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector<char> v;
int s2i(vector<char> v){
    int res = 0;
    for(int i=0;i<v.size();i++){
        res+=int(pow(10,i))*((int)v[v.size()-i-1]-48);
    }
    return res;
}

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    char inChar;
    bool start = false;
    int sum=0;
    while(cin>>inChar){
        
        if(inChar=='-'){
            if(start==true){
                sum-=s2i(v);
            }else{
                sum+=s2i(v);
                start=true;
            }
            v.clear();
        }else if(inChar=='+'){
            if(start==true){
                sum-=s2i(v);
            }else{
                sum+=s2i(v);
            }
            v.clear();
        }else{//그냥 숫자
            v.emplace_back(inChar);
        }
        
    }
    if(v.size()!=0){
        if(start==true)
            sum-=s2i(v);
        else
            sum+=s2i(v);
    }
    cout<<sum<<'\n';
    
    return 0;
}
