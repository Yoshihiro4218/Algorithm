//
//  main.cpp
//  1158
//
//  Created by deok9 on 2017. 11. 6..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int fNum,eNum,total=0,cnt=0,cur=0;
    vector<int> v;
    
    cin>>fNum>>eNum;
    for(int i=1;i<=fNum;i++){
        v.emplace_back(i);
    }
    cout<<'<';
    while(total!=fNum){
        if(v[cur]==0){
            cur+=1;
            cur%=fNum;
            continue;
        }
        if(cnt==(eNum-1)){
            cout<<v[cur];
            v[cur]=0;
            cnt=0;
            total++;
            if(total!=fNum)
                cout<<", ";
        }else
            cnt++;
        cur+=1;
        cur%=fNum;
    }
    cout<<'>'<<'\n';
    
    return 0;
}
