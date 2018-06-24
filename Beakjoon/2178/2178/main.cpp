//
//  main.cpp
//  2178
//
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
char map[101][101]={0,};
int check[101][101]={0,};
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    vector<pair<int,int>> v,tmp;
    int x,y,a,b,cnt=1;
    bool stop = false;
    int nX[4] = {0,-1,0,1};
    int nY[4] = {1,0,-1,0};
    
    cin>>x>>y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>map[i][j];
        }
    }
    v.emplace_back(make_pair(0, 0));
    check[0][0]=1;
    while(v.size()!=0){
        for(int i=0;i<v.size();i++){
            for(int j=0;j<4;j++){
                a = v[i].first+nX[j];
                b = v[i].second+nY[j];
                if(a==x-1&&b==y-1){
                    stop=true;
                    break;
                }
                if(a<0||b<0)
                    continue;
                if(a>=x||b>=y)
                    continue;
                if(check[a][b]==0&&map[a][b]=='1'){
                    tmp.emplace_back(make_pair(a, b));
                    check[a][b]=1;
                }
            }
            if(stop){
                tmp.clear();
                break;
            }
        }
        cnt++;
        v = tmp;
        tmp.clear();
    }
    
    cout<<cnt<<'\n';
    
    
    return 0;
}
