//
//  main.cpp
//  2745
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/users/deok9/desktop/input.txt", "r", stdin);
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cout<<i<<'\n';
    }
    return 0;
}
