//
//  main.cpp
//  2739
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/users/deok9/desktop/input.txt","r",stdin);
    int num;
    cin>>num;
    for(int i=1;i<10;i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<'\n';
    }
    return 0;
}
