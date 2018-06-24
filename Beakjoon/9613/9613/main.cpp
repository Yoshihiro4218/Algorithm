//
//  main.cpp
//  9613
//
//  Created by deok9 on 2017. 11. 19..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <cstdio>
#include <vector>
int gcd(int a, int b){
    return b==0?a:gcd(b,a%b);
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt", "r", stdin);
    int tCase, tCase2;
    int inNum, i, j;
    long long int g;
    std::vector<int> v;
    scanf("%d", &tCase);
    while(tCase--){
        g=0;
        scanf("%d", &tCase2);
        for(i=0;i<tCase2;i++){
            scanf("%d", &inNum);
            v.emplace_back(inNum);
        }
        for(i=0;i<tCase2;i++){
            for(j=i+1;j<tCase2;j++)
                g+=gcd(v[i],v[j]);
        }
        printf("%lld\n",g);
        v.clear();
    }
    return 0;
}
