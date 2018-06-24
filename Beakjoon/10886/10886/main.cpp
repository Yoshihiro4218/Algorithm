//
//  main.cpp
//  10886
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int tCase,inNum,an[2]={0,};
    string ans[2] = {"Junhee is not cute!","Junhee is cute!"};
    cin>>tCase;
    while(tCase--){
        cin>>inNum;
        an[inNum]+=1;
    }
    
    cout<<ans[an[0]>an[1]?0:1]<<'\n';
    
    return 0;
}
