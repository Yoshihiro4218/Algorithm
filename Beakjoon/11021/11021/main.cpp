//
//  main.cpp
//  11021
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio();
    freopen("/users/deok9/desktop/input.txt","r",stdin);
    int tCase,a,b;
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        cin>>a>>b;
        cout<<"Case #"<<i+1<<": "<<a+b<<'\n';
    }
    return 0;
}
