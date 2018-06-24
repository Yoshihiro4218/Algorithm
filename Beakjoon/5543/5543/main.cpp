//
//  main.cpp
//  5543
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int num[2],tmp;
    
    cin>>num[0]>>tmp;
    num[0] = min(num[0],tmp);
    cin>>tmp;
    num[0] = min(num[0],tmp);
    cin>>num[1]>>tmp;
    num[1] = min(num[1],tmp);
    
    cout<<num[0]+num[1]-50<<'\n';
    
    return 0;
}
