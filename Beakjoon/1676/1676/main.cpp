//
//  main.cpp
//  1676
//
//  Created by deok9 on 2017. 11. 21..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int inNum,cnt_5=0;
    cin>>inNum;
    
    for(int i = 2;i<=inNum;i++){
        if(i%5==0){
            cnt_5++;
            if(i%25==0)
                cnt_5++;
            if(i%125==0)
                cnt_5++;
        }
    }
    cout<<cnt_5<<'\n';
    return 0;
}
