//
//  main.cpp
//  2668
//
//  Created by deok9 on 2018. 6. 7..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
int check[100];
using namespace std;
int main(int argc, const char * argv[]) {
    vector<int> v;
    int tCase,ans[2]={0,0},tmp;
    cin>>tCase;
    
    for(int i=0;i<tCase;i++){
        cin>>tmp;
        v.emplace_back(tmp);
    }
    
    for(int i=0;i<tCase;i++){
        if(check[i]==1)
            continue;
        if(i+1==v[i]||v[v[i]]==i+1){
            check[v[i]]=1;
            ans[0]+=1;
            cout<<i+1<<'\n';
        }
    }
    
    return 0;
}
