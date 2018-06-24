//
//  main.cpp
//  2004
//
//  Created by deok9 on 2017. 11. 21..
//  Copyright © 2017년 deok9. All rights reserved.
//
#include <iostream>
#include <algorithm>
using namespace std;

long long get_count(long long num, int div)
{
    long long sum=0;
    while(num!=0){
        num=num/div;
        sum+=num;
    }
    return sum;
}
int main(void){
    long long n, m;
    long long five_count = 0,two_count=0;
    
    cin>>n>>m;
    five_count = get_count(n,5)-get_count(m,5)-get_count(n-m,5);
    two_count = get_count(n,2)-get_count(m,2)-get_count(n-m,2);
    
    cout<<min(five_count,two_count)<<'\n';
    
    
    
    return 0;
}
