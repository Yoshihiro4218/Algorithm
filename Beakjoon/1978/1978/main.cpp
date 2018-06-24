//
//  main.cpp
//  1978
//
//  Created by deok9 on 2017. 11. 21..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int tCase,inNum,cnt=0;
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        cin>>inNum;
        if(inNum==1)
            cnt++;
        for(int i=2;i*i<=inNum;i++){
            if(inNum%i==0){
                cnt++;
                break;
            }
        }
    }
    cout<<tCase-cnt<<'\n';
    return 0;
}
