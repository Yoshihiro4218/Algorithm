//
//  main.cpp
//  2017_kakao_1
//
//  Created by deok9 on 2018. 10. 1..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
        }
    }
    
    
    
    
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}

int main(int argc, const char * argv[]) {
    int m = 6, n = 4;
    vector<vector<int>> pic;
    vector<int> v,ans;
    
    v.emplace_back(1,1,1,0);
    pic.emplace_back(v);
    v.clear();
    v.emplace_back(1,2,2,0);
    pic.emplace_back(v);
    v.clear();
    v.emplace_back(1,0,0,1);
    pic.emplace_back(v);
    v.clear();
    v.emplace_back(0,0,0,1);
    pic.emplace_back(v);
    v.clear();
    v.emplace_back(0,0,0,3);
    pic.emplace_back(v);
    v.clear();
    v.emplace_back(0,0,0,3);
    pic.emplace_back(v);
    v.clear();
    
    ans = solution(m,n,pic);
    cout<<ans[0]<<'\n'<<ans[1];
    
    return 0;
}
