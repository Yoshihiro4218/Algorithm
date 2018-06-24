//
//  main.cpp
//  2783
//
//  Created by deok9 on 2017. 11. 14..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    float g_gram,g_mon;
    float g_gram2,g_mon2;
    float min;
    int n;
    scanf("%f %f",&g_mon,&g_gram);
    scanf("%d",&n);
    min = g_mon/g_gram*1000;
    while(n--){
        scanf("%f %f",&g_mon2,&g_gram2);
        if(g_mon2/g_gram2*1000<min){
            min = g_mon2/g_gram2*1000;
        }
    }
    printf("%.2f\n",min);
    
    return 0;
}
