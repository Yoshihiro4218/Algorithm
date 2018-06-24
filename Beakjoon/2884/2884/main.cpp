//
//  main.cpp
//  2884
//
//  Created by deok9 on 2018. 6. 6..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int h,m,total;
    cin>>h>>m;
    total = h*60+m;
    total = total-45;
    
    if(total>1440)
        total-=1440;
    if(total<0)
        total+=1440;
    
    h = total/60;
    m = total-h*60;
    
    cout<<h<<" "<<m<<'\n';
    
    return 0;
}
