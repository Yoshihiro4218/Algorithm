//
//  main.cpp
//  10952
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int a,b;
    while(1){
        cin>>a>>b;
        if(a==0&&b==0)
            break;
        cout<<a+b<<'\n';
    }
    return 0;
}
