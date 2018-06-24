//
//  main.cpp
//  2667
//
//  Created by deok9 on 2018. 4. 11..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char map[25][25];
bool check[25][25];
int aLange,inNum;

void dp(int a,int b){
    int x[4]={1, 0, -1, 0};
    int y[4]={0, 1, 0, -1};
    check[a][b]=true;
    aLange++;

    for(int i=0;i<4;i++){
        if(x[i]+a<0||y[i]+b<0||x[i]+a>inNum-1||y[i]+b>inNum-1)
            continue;
        if(check[x[i]+a][y[i]+b]==true)
            continue;
        if(map[x[i]+a][y[i]+b]=='0')
            continue;
        dp(x[i]+a,y[i]+b);
    }
    
}

int main(int argc, const char * argv[]) {
    vector<int> v;
    cin>>inNum;
    
    //Input Zone
    for(int i=0;i<inNum;i++){
        for(int j=0;j<inNum;j++){
            cin>>map[i][j];
        }
    }
    
    //Algorithm Zone
    for(int i=0;i<inNum;i++){
        for(int j=0;j<inNum;j++){
            if(map[i][j]=='0')
                continue;
            if(check[i][j]==false){
                aLange=0;
                dp(i,j);
                v.emplace_back(aLange);
            }
        }
    }
    
    //Output Zone
    sort(v.begin(),v.end());
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        if(i+1!=v.size())
            cout<<"\n";
    }
    
    return 0;
}
