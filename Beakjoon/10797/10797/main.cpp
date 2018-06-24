//
//  main.cpp
//  10797
//
//  Created by deok9 on 2018. 6. 5..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int t,ans=0,inNum;
    
    cin>>t;
    for(int i=0;i<5;i++){
        cin>>inNum;
        if(inNum==t)
            ans+=1;
    }
    
    cout<<ans<<'\n';
    
    return 0;
}
