//
//  main.cpp
//  10815
//
//  Created by deok9 on 2018. 6. 1..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check[500001];
vector<int> card;

void trace(int a,int f,int e){
    int m = (f+e)/2;
    
    if(card[m]==a){
        cout<<"1";
        return;
    }
    if(f==e){
        cout<<"0";
        return;
    }
    if(card[m]>a){
        if(f>m-1){
            cout<<"0";
            return;
        }
        trace(a,f,m-1);
    }
    if(card[m]<a){
        if(m+1>e){
            cout<<"0";
            return;
        }
        trace(a,m+1,e);
    }
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int N,M,tmp;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>tmp;
        card.emplace_back(tmp);
    }
    cin>>M;
    for(int i=0;i<M;i++)
        cin>>check[i];
    
    sort(card.begin(),card.end());
    
    for(int i=0;i<M;i++){
        trace(check[i],0,N-1);
        if(i+1==M)
            cout<<'\n';
        else
            cout<<" ";
    }
    
    return 0;
}
