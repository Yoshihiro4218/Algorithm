//
//  main.cpp
//  kakao_e1
//
//  Created by deok9 on 2018. 3. 23..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> v;
    v.emplace_back(2,3);
    v.emplace_back(5,3);
    v.emplace_back(1,4);
    v.emplace_back(4,5);
    v.emplace_back(5,7);
    sort(v.begin(),v.end(),(a,b,a1,b1)->return b>b1)
}
