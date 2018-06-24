//
//  main.cpp
//  1965
//
//  Created by deok9 on 2018. 6. 2..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    freopen("/Users/deok9/desktop/input.txt", "r",stdin);
    
    int n,Max=0;
    vector<int>v(1001, 0), DP(1001, 0);
    cin>>n;
    //INPUTZONE
    for (int j = 0; j < n; j++)
        cin>>v[j];
    //ALGORITHMZONE
    for (int j = 0; j < n; j++){
        Max = 0;
        for (int k = 0; k < j; k++)
            if (v[j] > v[k])
                Max = max(Max, DP[k]);
        DP[j] = Max + 1;
    }
    
    Max = 0;
    for (int j = 0; j < n; j++)
        Max = max(Max, DP[j]);
    
    cout<<Max<<'\n';
    
    return 0;
    
}
