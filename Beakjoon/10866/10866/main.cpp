//
//  main.cpp
//  10866
//
//  Created by deok9 on 2017. 11. 17..
//  Copyright © 2017년 deok9. All rights reserved.
//
/*
 push_front X: 정수 X를 덱의 앞에 넣는다.
 push_back X: 정수 X를 덱의 뒤에 넣는다.
 pop_front: 덱의 가장 앞에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 pop_back: 덱의 가장 뒤에 있는 수를 빼고, 그 수를 출력한다. 만약, 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 size: 덱에 들어있는 정수의 개수를 출력한다.
 empty: 덱이 비어있으면 1을, 아니면 0을 출력한다.
 front: 덱의 가장 앞에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 back: 덱의 가장 뒤에 있는 정수를 출력한다. 만약 덱에 들어있는 정수가 없는 경우에는 -1을 출력한다.
 */

#include <iostream>
#include <deque>
using namespace std;
deque<int> dq;
int input;
void select(string s){
    if(s=="push_front"){
        cin>>input;
        dq.emplace_front(input);
    }
    else if(s=="push_back"){
        cin>>input;
        dq.emplace_back(input);
    }
    else if(s=="pop_front"){
        if(dq.empty())
            cout<<-1<<'\n';
        else{
            cout<<dq.front()<<'\n';
            dq.pop_front();
        }
    }
    else if(s=="pop_back"){
        if(dq.empty())
            cout<<-1<<'\n';
        else{
            cout<<dq.back()<<'\n';
            dq.pop_back();
        }
    }
    else if(s=="size"){
        cout<<dq.size()<<'\n';
    }
    else if(s=="front"){
        cout<<(dq.empty()?-1:dq.front())<<'\n';
    }
    else if(s=="empty"){
        cout<<(dq.empty()?1:0)<<'\n';
    }
    else if(s=="back"){
        cout<<(dq.empty()?-1:dq.back())<<'\n';
    }
}
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int tCase;
    string s;
    
    cin>>tCase;
    while(tCase--){
        cin>>s;
        select(s);
    }
    
    return 0;
}
