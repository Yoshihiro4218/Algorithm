//
//  main.cpp
//  1463
//
//  Created by deok9 on 2017. 11. 7..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int sol(int n){
    if(n<=1) return 0;
    return min(sol(n/2)+n%2+1,sol(n/3)+n%3+1);
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int inNum;
    
    cin>>inNum;
    cout<<sol(inNum)<<'\n';
    
    return 0;
}
