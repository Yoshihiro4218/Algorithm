//
//  main.cpp
//  9095
//
//  Created by deok9 on 2017. 11. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//
#include <cstdio>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int tCase,total;
    vector<int> v;
    scanf("%d",&tCase);
    
    while(tCase--){
        v = vector<int>(11,0);
        v[0]=1;
        scanf("%d",&total);
        for(int i=1;i<=total;i++){
            for(int j=1;j<=3;j++){
                if(i-j>=0){
                    v[i]+=v[i-j];
                }
            }
        }
        printf("%d\n",v[total]);
    }
    
    return 0;
}
