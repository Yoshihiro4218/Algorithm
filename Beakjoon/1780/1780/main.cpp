//
//  main.cpp
//  1780
//
//  Created by deok9 on 2018. 3. 20..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;
vector<int> tv;
int ansM1=0,ans0=0,ans1=0;
void thumUp(int n){
    switch(n){
        case -1:
            ansM1++;
            break;
        case 0:
            ans0++;
            break;
        case 1:
            ans1++;
            break;
    }
}
int checkV(int a,int b,int n){
    int tmp = v[a][b];
    for(int i=a;i<a+n;i++){
        for(int j=b;j<b+n;j++){
            if(tmp!=v[i][j])
                return 3;
        }
    }
    return tmp;
}
void solut(int a,int b,int n){
    int tmp = checkV(a,b,n);
    if(tmp!=3)
        thumUp(tmp);
    else{
        n/=3;
        if(n==0)
            return;
        solut(a,b,n);
        solut(a,b+n,n);
        solut(a,b+2*n,n);
        solut(a+n,b,n);
        solut(a+n,b+n,n);
        solut(a+n,b+2*n,n);
        solut(a+2*n,b,n);
        solut(a+2*n,b+n,n);
        solut(a+2*n,b+2*n,n);
    }
}

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int num, inNum;
    cin>>num;
    //Input Zone
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>inNum;
            tv.emplace_back(inNum);
        }
        v.emplace_back(tv);
        tv.clear();
    }
    //Algorithm Zone
    solut(0, 0, num);
    //Output Zone
    cout<<ansM1<<'\n'<<ans0<<'\n'<<ans1<<'\n';
    return 0;
}


