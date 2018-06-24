//
//  main.cpp
//  1992
//
//  Created by deok9 on 2018. 1. 25..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;

char map[70][70];
int check(int sa,int sb,int num){
    char result = map[sa][sb];
    for(int i=sa;i<sa+num;i++){
        for(int j=sb;j<sb+num;j++){
            if(map[i][j]!=result)
                return 0;
        }
    }
    if(result=='1')
        return 2;
    else
        return 1;
}
void solution(int sa,int sb,int num){
    int mid = num/2;
    int tmp = 1;
    tmp = check(sa,sb,num);
    if(tmp){
        cout<<tmp-1;
    }else{
        cout<<"(";
        tmp = check(sa,sb,mid);
        if(!tmp)
            solution(sa,sb,mid);
        else
            cout<<tmp-1;
        tmp = check(sa,sb+mid,mid);
        if(!tmp)
            solution(sa,sb+mid,mid);
        else
            cout<<tmp-1;
        tmp = check(sa+mid,sb,mid);
        if(!tmp)
            solution(sa+mid,sb,mid);
        else
            cout<<tmp-1;
        tmp = check(sa+mid,sb+mid,mid);
        if(!tmp)
            solution(sa+mid,sb+mid,mid);
        else
            cout<<tmp-1;
        cout<<")";
    }
}

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>map[i][j];
        }
    }
    solution(0, 0, num);
    cout<<'\n';
    return 0;
}
