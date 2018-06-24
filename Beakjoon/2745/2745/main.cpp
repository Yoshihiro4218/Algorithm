//
//  main.cpp
//  2745
//
//  Created by deok9 on 2017. 11. 19..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
long long int result = 0;
void multiple(int a,int b){
    result = (result)*b+a;
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int b;
    string s;
    cin>>s>>b;
    for(char x : s){
        if((int)x>=(int)'A')
            multiple((int)x-(int)'A'+10, b);
        else
            multiple((int)x-(int)'0', b);
    }
    cout<<result<<'\n';
    return 0;
}
