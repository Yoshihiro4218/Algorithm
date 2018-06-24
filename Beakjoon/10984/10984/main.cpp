//
//  main.cpp
//  10984
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase,inCase,inS,tNum=0;
    double total=0,inNum,ans;
    cin>>tCase;
    while(tCase--){
        cin>>inCase;
        for(int i=0;i<inCase;i++){
            cin>>inS>>inNum;
            tNum+=inS;
            total+=double(inNum)*double(inS);
        }
        ans = (ceil(total/tNum*10+0.5)-1)/10;
        cout<<tNum<<" ";
        if(ans-int(ans)==0)
            cout<<ans<<".0"<<'\n';
        else
            cout<<ans<<'\n';
        total=0;
        tNum=0;
    }
    
    return 0;
}
