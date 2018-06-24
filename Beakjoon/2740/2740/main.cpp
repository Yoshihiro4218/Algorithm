//
//  main.cpp
//  2740
//  행렬곱셈
//  Created by deok9 on 2018. 1. 25..
//  Copyright © 2018년 deok9. All rights reserved.
//
#include<cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    std::ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int N,M,K,inNum;
    vector<vector<int>> v,v2;
    vector<int> tmp;
    //Algorithm Zone
    cin>>N>>M;
    while(cin>>inNum){
        
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>inNum;
            tmp.emplace_back(inNum);
        }
        v.emplace_back(tmp);
        tmp.clear();
    }
    cin>>M>>K;
    for(int i=0;i<M;i++){
        for(int j=0;j<K;j++){
            cin>>inNum;
            tmp.emplace_back(inNum);
        }
        v2.emplace_back(tmp);
        tmp.clear();
    }
    
    //result Zone
    for(int i=0;i<N;i++){
        int tNum = 0;
        for(int j=0;j<K;j++){
            for(int k=0;k<M;k++){
                tNum+=(v[i][k]*v2[k][j]);
            }
            cout<<tNum;
            if(j+1!=K)
                cout<<" ";
            tNum=0;
        }
        cout<<'\n';
    }
    
    return 0;
}
