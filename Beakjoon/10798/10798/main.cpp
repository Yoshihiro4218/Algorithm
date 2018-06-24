//
//  main.cpp
//  10798
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    
    vector<string> vStr;
    string inStr;
    
    for(int i=0;i<5;i++){
        cin>>inStr;
        vStr.emplace_back(inStr);
    }
    
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            if(vStr[j].size()-1>=i)
                cout<<vStr[j][i];
        }
    }
    
    return 0;
}
