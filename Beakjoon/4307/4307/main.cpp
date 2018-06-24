//
//  main.cpp
//  4307
//
//  Created by deok9 on 2018. 6. 5..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int tCase, n, l ,k;
    int maxtime, mintime;
    
    cin >> tCase;
    while(tCase--){
        cin >> l >> n;
        cin >> k;
        maxtime = max(k, l-k);
        mintime = min(k, l-k);
        for(int i=1;i<n;i++){
            cin >> k;
            maxtime = max(max(k, l-k), maxtime);
            mintime = max(min(k, l-k), mintime);
        }
        cout << mintime << " " << maxtime << endl ;
    }
    
    return 0;
}
