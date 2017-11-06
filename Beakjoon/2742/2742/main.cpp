//
//  main.cpp
//  2742
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/users/deok9/desktop/input.txt","r",stdin);
    int num;
    cin>>num;
    while(num){
        cout<<num--<<'\n';
    }
    return 0;
}
