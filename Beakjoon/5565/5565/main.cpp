//
//  main.cpp
//  5565
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int inNum,ans;
    cin>>ans;
    while(cin>>inNum)
        ans-=inNum;
    cout<<ans<<'\n';
    return 0;
}
