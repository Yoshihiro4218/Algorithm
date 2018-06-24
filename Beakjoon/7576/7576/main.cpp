//
//  main.cpp
//  7576
//
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int map[1001][1001];
int check[1001][1001];

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int x,y,res=0,a,b;
    int nX[4] = {1,0,-1,0};
    int nY[4] = {0,1,0,-1};
    
    bool start = true;
    vector<pair<int,int>> v;
    vector<pair<int,int>> tmp;
    cin>>x>>y;
    
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cin>>map[i][j];
            check[i][j]=map[i][j];
            if(map[i][j]==1)
                v.emplace_back(make_pair(i, j));
        }
    }
    
    while(start){
        for(int i=0;i<v.size();i++){
            
            for(int j=0;j<4;j++){
                
                a=v[i].first+nY[j];
                b=v[i].second+nX[j];
                if(a<0||b<0)
                    continue;
                if(a>=y||b>=x)
                    continue;
                if(check[a][b]==0){
                    check[a][b]=1;
                    tmp.emplace_back(make_pair(a, b));
                }
            }
        }
        
        if(tmp.size()==0)
            break;
        res+=1;
        v = tmp;
        tmp.clear();
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            if(check[i][j]==0){
                res=-1;
                break;
            }
        }
    }
    
    cout<<res<<'\n';
    
    return 0;
}
