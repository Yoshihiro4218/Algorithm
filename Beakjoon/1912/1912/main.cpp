//
//  main.cpp
//  1912
//
//  Created by deok9 on 2018. 6. 25..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int main(int argc, const char * argv[]) {
    int num,tmp=0,nNum=0;
    vector<int> v(100001);
    
    //INPUT ZONE
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>v[i];
    }
    
    //ALGORITHM ZONE
    nNum = v[0];
    if(v[0]>0){
        tmp = v[0];
    }
    for(int i=1;i<num;i++){
        if(v[i]+tmp<0){
            nNum = max(v[i]+tmp,nNum);
            tmp = 0;
        }else{
            tmp+=v[i];
            nNum = max(tmp,nNum);
        }
    }
    
    //OUTPUT ZONE
    cout<<nNum<<'\n';
    
    return 0;
}
