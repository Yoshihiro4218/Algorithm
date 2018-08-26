//
//  main.cpp
//  2959
//
//  Created by deok9 on 2018. 6. 28..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    vector<int> v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<v[2]*v[0]<<'\n';
    return 0;
}
