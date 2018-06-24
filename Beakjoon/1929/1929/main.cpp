//
//  main.cpp
//  1929
//
//  Created by deok9 on 2017. 11. 21..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    cin>>a>>b;
    vector<int> arr(1000000);
    for(int i=2;i<=b;i++){
        if(arr[i]==0){
            for(int j=2;;j++){
                if(i*j<=b)
                    arr[i*j]=1;
                else
                    break;
            }
        }
    }
    for(int i=a;i<=b;i++){
        if(arr[i]==0)
            cout<<i<<'\n';
    }
    return 0;
}
