//
//  main.cpp
//  5533
//
//  Created by deok9 on 2018. 6. 7..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int arr[101][3];
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase,inNum,ans;
    vector<vector<int>> v;
    vector<int> tmp;
    
    cin>>tCase;
    for(int i=0;i<tCase;i++){
        for(int j=0;j<3;j++){
            cin>>inNum;
            tmp.emplace_back(inNum);
            arr[inNum][j]+=1;
        }
        v.emplace_back(tmp);
        tmp.clear();
    }
    
    for(int i=0;i<tCase;i++){
        ans=0;
        for(int j=0;j<3;j++){
            if(arr[v[i][j]][j]==1){
                ans+=v[i][j];
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
    
}
