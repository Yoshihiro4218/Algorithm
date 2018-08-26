//
//  main.cpp
//  10026
//
//  Created by deok9 on 2018. 7. 20..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
char map[100][100];
char map2[100][100];
int check1[100][100],check2[100][100];
int nCase;
using namespace std;
void NotIll(int i,int j,int n){
    if(n==0)
        check1[i][j]=1;
    else
        check2[i][j]=1;
    int nX,nY;
    int x[4] = {1,0,-1,0};
    int y[4] = {0,-1,0,1};
    for(int k=0;k<4;k++){
        nX = i+x[k];
        nY = j+y[k];
        if(nX<0||nY<0)
            continue;
        if(nX>=nCase||nY>=nCase)
            continue;
        if(n==0){
            if(check1[nX][nY]==0&&map[nX][nY]==map[i][j])
                NotIll(nX,nY,n);
        }else{
            if(check2[nX][nY]==0&&map[nX][nY]==map[i][j])
                NotIll(nX,nY,n);
        }
    }
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int res[2]={0,0};
    // INPUT ZONE
    cin>>nCase;
    for(int i=0;i<nCase;i++){
        for(int j=0;j<nCase;j++){
            cin>>map[i][j];
        }
    }
    // ALGORITHM ZONE
    // #1
    for(int i=0;i<nCase;i++){
        for(int j=0;j<nCase;j++){
            if(check1[i][j]==0){
                res[0]+=1;
                NotIll(i,j,0);
            }
        }
    }
    // #2
    for(int i=0;i<nCase;i++){
        for(int j=0;j<nCase;j++){
            if(map[i][j]=='R')
                map[i][j]='G';
        }
    }
    for(int i=0;i<nCase;i++){
        for(int j=0;j<nCase;j++){
            if(check2[i][j]==0){
                res[1]+=1;
                NotIll(i, j,1);
            }
        }
    }
    cout<<res[0]<<" "<<res[1]<<'\n';
    return 0;
}
