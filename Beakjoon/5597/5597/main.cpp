//
//  main.cpp
//  5597
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    vector<int> v(31,0);
    int inNum;
    while(cin>>inNum)
        v[inNum]+=1;
    
    for(int i=1;i<31;i++)
        if(v[i]==0)
            cout<<i<<'\n';
    
    return 0;
}
