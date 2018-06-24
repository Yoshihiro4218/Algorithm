//
//  main.cpp
//  6603
//
//  Created by deok9 on 2018. 6. 7..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    vector<int> v;
    int tCase,tmp;
    
    cin>>tCase;
    while(tCase!=0){
        for(int i=0;i<tCase;i++){
            cin>>tmp;
            v.emplace_back(tmp);
        }
        for(int a=0;a<tCase;a++){
            for(int a1=a+1;a1<tCase;a1++){
                for(int a2=a1+1;a2<tCase;a2++){
                    for(int a3=a2+1;a3<tCase;a3++){
                        for(int a4=a3+1;a4<tCase;a4++){
                            for(int a5=a4+1;a5<tCase;a5++){
                                cout<<v[a]<<" "<<v[a1]<<" "<<v[a2]<<" "<<v[a3]<<" "<<v[a4]<<" "<<v[a5]<<'\n';
                            }
                        }
                    }
                }
            }
        }
        cout<<'\n';
        v.clear();
        cin>>tCase;
    }
    
    
    
    return 0;
}
