//
//  main.cpp
//  2935
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int a=0,b=0;
    char inChar,nn='+';
    bool triger=false;
    while(cin>>inChar){
        if(inChar=='0'){
            if(!triger){
                a+=1;
            }else
                b+=1;
            continue;
        }
        if(inChar=='*'){
            nn='*';
            triger=true;
        }else if(inChar=='+'){
            nn='+';
            triger=true;
        }
    }
    if(nn=='*'){
        cout<<1;
        for(int i=0;i<a+b;i++)
            cout<<0;
        cout<<'\n';
    }else{
        if(a==b)
            cout<<2;
        else
            cout<<1;
        int Max = max(a,b),Min = min(a,b);
        for(int i=1;i<=Max;i++){
            if(i==Max-Min)
                cout<<1;
            else
                cout<<0;
        }
        cout<<'\n';
    }
    
    return 0;
}
