//
//  main.cpp
//  4948
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[123456*2+1];

void solution(int Max){
    arr[0]=0;
    arr[1]=2;
    int k=0;
    for(int i=2;i<=Max;i++){
        if(arr[i]!=2){
            arr[i]=1;
            k=i;
            for(int j=2;k*j<=Max;j++){
                arr[k*j]=2;
            }
        }
    }
}

void ans(int n){
    int ans=0;
    for(int i=n+1;i<=n*2;i++){
        if(arr[i]==1)
            ans+=1;
    }
    cout<<ans<<'\n';
}

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int inNum,Max=0;
    vector<int> v;
    
    while(cin>>inNum){
        v.emplace_back(inNum);
        Max = max(Max,inNum);
    }
    v.pop_back();
    
    solution(Max*2);
    for(auto x: v){
        ans(x);
    }
    
    return 0;
}
