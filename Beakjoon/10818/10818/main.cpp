//
//  main.cpp
//  10818
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/users/deok9/desktop/input.txt", "r", stdin);
    int tCase,inNum,min,max;
    cin>>tCase;
    cin>>inNum;
    min = inNum;
    max = inNum;
    for(int i=1;i<tCase;i++){
        cin>>inNum;
        if(min>inNum)
            min=inNum;
        if(max<inNum)
            max=inNum;
    }
    cout<<min<<" "<<max<<'\n';
    
    return 0;
}
