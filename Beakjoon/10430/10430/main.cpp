//
//  main.cpp
//  10430
//
//  Created by deok9 on 2017. 11. 18..
//  Copyright © 2017년 deok9. All rights reserved.
//
//첫째 줄에 (A+B)%C, 둘째 줄에 (A%C + B%C)%C, 셋째 줄에 (A×B)%C, 넷째 줄에 (A%C × B%C)%C를 출력한다.
#include <cstdio>
int main(int argc, const char * argv[]) {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    A%=C;B%=C;
    printf("%d\n%d\n%d\n%d\n",(A+B)%C,(A+B)%C,(A*B)%C,(A*B)%C);
    return 0;
}
