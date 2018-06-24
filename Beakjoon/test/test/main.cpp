//
//  main.cpp
//  test
//
//  Created by deok9 on 2018. 6. 7..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},tmp;
    vector<vector<int>> ans;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
                tmp.emplace_back(v[i]);
                tmp.emplace_back(v[j]);
                tmp.emplace_back(v[k]);
                ans.emplace_back(tmp);
                tmp.clear();
            }
        }
    }
    for(auto x : ans){
        cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<'\n';
    }
    
    return 0;
}
