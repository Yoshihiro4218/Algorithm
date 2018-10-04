//
//  main.cpp
//  5585
//
//  Created by deok9 on 2018. 10. 4..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int m, ans=0;
    vector<int> v = {500,100,50,10,5,1};
    
    cin>>m;
    m = 1000-m;
    
    for(int x : v){
        while(1){
            if(m-x>=0){
                ans+=1;
                m-=x;
            }else
                break;
        }
    }
    
    cout<<ans<<'\n';
    
    return 0;
}
