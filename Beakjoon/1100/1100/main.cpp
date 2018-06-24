//
//  main.cpp
//  1100
//
//  Created by deok9 on 2017. 11. 24..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int cnt=0;
    char c;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>c;
            if(i%2==0){
                if(c=='F'&&j%2==0)
                    cnt++;
            }else{
                if(c=='F'&&j%2==1)
                    cnt++;
            }
        }
    }
    cout<<cnt<<'\n';
    
    return 0;
}
