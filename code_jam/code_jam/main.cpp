//
//  main.cpp
//  code_jam
//
//  Created by deok9 on 2018. 8. 26..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int solution(){
    int res = 0,N,K,tmp,nxt=0;
    vector<int> v;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>tmp;
        v.emplace_back(tmp);
    }
    sort(v.begin(),v.end());
    tmp=0;
    for(int i=0;i<N;i++){
        if(v[i]-tmp>=1){
            res+=1;
            nxt+=1;
        }
        if(nxt==K){
            nxt=0;
            tmp+=1;
        }
    }
    return res;
}

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    ios::sync_with_stdio(false);
    clock_t start = clock();
    int tCase;
    vector<int> v;
    //INPUT ZONE
    cin>>tCase;
    //Algorithm Zone
    for(int i=0;i<tCase;i++){
        cout<<"Case #"<<i+1<<": "<<solution()<<'\n';
    }
//    end = clock();
//    cout<<"수행시간 : "<<((end-begin)/CLOCKS_PER_SEC)<<endl;
    cout<<((float)(clock() - start)/CLOCKS_PER_SEC);

    return 0;
}
