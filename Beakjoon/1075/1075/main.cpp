//
//  main.cpp
//  1075
//
//  Created by deok9 on 2017. 11. 14..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    long long int N,F;
    cin>>N>>F;
    long long int result = N/100;
    result*=100;
    for(int i=0;i<100;i++){
        if((result+i)%F==0){
            if(i<10){
                cout<<'0'<<i<<'\n';
            }else
                cout<<i<<'\n';
            return 0;
        }
    }
    return 0;
}
