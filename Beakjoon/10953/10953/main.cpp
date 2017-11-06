//
//  main.cpp
//  10953
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    int tCase;
    char a,b,c;
    cin>>tCase;
    while(tCase--){
        cin>>a>>b>>c;
        cout<<(a+c)-2*'0'<<'\n';
    }
    
    return 0;
}
