//
//  main.cpp
//  10872
//
//  Created by deok9 on 2017. 11. 21..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int inNum,res=1;
    cin>>inNum;
    for(int i=1;i<=inNum;i++){
        res*=i;
    }
    cout<<res<<'\n';
    
    return 0;
}
