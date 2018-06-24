//
//  main.cpp
//  2960
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[1001]={0,};
int main(int argc, const char * argv[]) {
    int N,K,ans=0,cnt=0,k=0;
    cin>>N>>K;
    bool triger = false;
    
    for(int i=2;i<=N;i++){
        if(arr[i]!=2){
            arr[i]=1;
            cnt+=1;
            if(cnt==K){
                ans = i;
                break;
            }
            k=i;
            for(int j=2;k*j<=N;j++){
                if(arr[j*k]==2)
                    continue;
                cnt++;
                if(cnt==K){
                    ans = k*j;
                    triger=true;
                    break;
                }
                
                arr[k*j]=2;
            }
        }
        if(triger)
            break;
    }
    
    cout<<ans<<'\n';
    
    return 0;
}
