//
//  main.cpp
//  8393
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n,sum=0;
    cin>>n;
    while(n){
        sum+=n--;
    }
    cout<<sum<<'\n';
    return 0;
}
