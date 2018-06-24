//
//  main.cpp
//  1138
//
//  Created by deok9 on 2018. 5. 31..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int arr[10]={0,};
int ans[10]={0,};

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int inCase;
    cin>>inCase;
    
    for(int i=0;i<inCase;i++)
        cin>>arr[i];
    
    for(int i=0;i<inCase;i++){
        for(int j=arr[i];j<inCase;j++){
            if(ans[j]==0){
                ans[j]=i+1;
                break;
            }
        }
    }
    
    for(int i=0;i<inCase;i++){
        cout<<ans[i];
        cout<<(i+1!=inCase?" ":"\n");
    }
    
    return 0;
}
