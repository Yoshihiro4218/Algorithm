//
//  main.cpp
//  11022
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/users/deok9/desktop/input.txt","r",stdin);
    int tCase,a,b;
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        cin>>a>>b;
        cout<< "Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<a+b<<'\n';
        
    }
    
    return 0;
}
