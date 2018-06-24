//
//  main.cpp
//  1037
//
//  Created by deok9 on 2017. 11. 17..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    int tCase,inNum,result=1;
    vector<int> v;
    scanf("%d",&tCase);
    
    while(tCase--){
        scanf("%d",&inNum);
        v.emplace_back(inNum);
    }
    sort(v.begin(),v.end());
    
    printf("%d\n",v.front()*v.back());
    
    return 0;
}
