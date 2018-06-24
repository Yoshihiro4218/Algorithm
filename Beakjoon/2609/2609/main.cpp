//
//  main.cpp
//  2609
//
//  Created by deok9 on 2017. 11. 19..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int gcd(int a, int b){
    return b==0?a:gcd(b,a%b);
}
int main(int argc, const char * argv[]) {
    int a,b,result;
    cin>>a>>b;
    result = gcd(a, b);
    cout<<result<<'\n'<<a*b/result<<'\n';
    return 0;
}
