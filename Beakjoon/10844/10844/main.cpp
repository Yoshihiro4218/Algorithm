//
//  main.cpp
//  10844
//
//  Created by deok9 on 2017. 11. 14..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[101][10],N;
    long long result=0;
    cin>>N;
    arr[1][0] = 0;
    for(int i=1;i<10;i++){
        arr[1][i]=1;
    }
    for(int i=2;i<=N;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=0;
            if(j-1>=0)arr[i][j]+=arr[i-1][j-1];
            if(j+1<=9)arr[i][j]+=arr[i-1][j+1];
            arr[i][j]%=1000000000;
        }
    }
    for(int x:arr[N]){
        result+=x;
    }
    cout<<result%1000000000<<'\n';
    return 0;
}
