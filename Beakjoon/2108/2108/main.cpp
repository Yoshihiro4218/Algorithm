//
//  main.cpp
//  2108
//  통계학
//  Created by deok9 on 2018. 3. 10..
//  Copyright © 2018년 deok9. All rights reserved.
//
/*
 1. 합을 n으로 나누기
 2. 중앙갚
 3. 최빈
 4. 최대 최소 차이
 */
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int N,inNum, sum=0,cnt=0,rnum=500000;
    scanf("%d",&N);
    vector<int> v;
    vector<vector<int>> sz(500001);
    
    for(int i=0;i<N;i++){
        scanf("%d", &inNum);
        v.emplace_back(inNum);
        sum+=inNum;
    }
    sort(v.begin(),v.end());
    printf("%.0f\n",floor((float)sum/(float)N));
    printf("%d\n", v[N/2]);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(cnt!=0){
            if(v[i-1]==v[i]){
                cnt++;
            }else{
                sz[cnt].emplace_back(v[i-1]);
                cnt=1;
            }
        }else
            cnt++;
    }
    sz[cnt].emplace_back(v[v.size()-1]);
    for(int i=1;i<sz.size();i++){
        if(sz[i].size()==0){
            rnum=i-1;
            break;
        }
    }
    sort(sz[rnum].begin(),sz[rnum].end());
    printf("%d\n",sz[rnum].size()>2?sz[rnum][1]:sz[rnum][0]);
    printf("%d\n",v[v.size()-1]-v[0]);
    
    return 0;
}
