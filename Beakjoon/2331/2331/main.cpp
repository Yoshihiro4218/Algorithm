//
//  main.cpp
//  2331
//  반복수열
//  Created by deok9 on 2017. 11. 29..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;
int n,p,res;
int chk[500000];
int next(int a){
    int sum = 0;
    while(a){
        sum+=pow(a%10,p);
        a/=10;
    }
    return sum;
}
int bfs(int n,int p,int cnt){
    cnt++;
    if(chk[n]==0)
        chk[n]=cnt;
    else{
        return chk[n]-1;
    }
    int sum=next(n);
    return(bfs(sum,p,cnt));
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    cin>>n>>p;
    cout<<bfs(n,p,0)<<'\n';
    
    return 0;
}
