//
//  main.cpp
//  11057
//
//  Created by deok9 on 2017. 11. 16..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int mod = 10007,input,result=0;
    int arr[1001][10];
    for (int i=0;i<10;i++){
        arr[1][i]=1;
    }
    cin>>input;
    for(int i=2;i<=input;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=0;
            for(int x=j;x>=0;x--){
                arr[i][j] += arr[i-1][x];
                arr[i][j]%=mod;
            }
        }
    }
    for(int x : arr[input]){
        result+=x;
        result%=mod;
    }
    cout<<result<<'\n';
    return 0;
}
