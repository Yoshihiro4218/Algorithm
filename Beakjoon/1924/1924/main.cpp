//
//  main.cpp
//  1924
//
//  Created by deok9 on 2017. 10. 11..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    int x,y,nDate=0;
    string date[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    cin>>x>>y;
    for(int i=1;i<x;i++){
        if(i==2)
            nDate+=28;
        else if(i==4||i==6||i==9||i==11)
            nDate+=30;
        else
            nDate+=31;
    }
    nDate+=y;
    cout<<date[nDate%7]<<'\n';
    
    return 0;
}
