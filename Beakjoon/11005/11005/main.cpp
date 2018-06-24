//
//  main.cpp
//  11005
//
//  Created by deok9 on 2017. 11. 19..
//  Copyright © 2017년 deok9. All rights reserved.
//

#include <cstdio>
void change(long long int a, int b){
    int r = a%b;
    if(a/b!=0){
        change(a/b,b);
    }
    if(r>=10)
        printf("%c",r+55);
    else
        printf("%d",r);
}
int main(int argc, const char * argv[]) {
    long long int a;
    int b;
    scanf("%lld %d",&a,&b);
    change(a, b);
    printf("\n");
    return 0;
}
