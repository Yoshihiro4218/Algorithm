#include <iostream>
#include <vector>
using namespace std;

int main(void){
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    //varZone
    int tCase,total,inNum;
    int dp[10001] = {1,};
    vector<int> v;
    //inputZone
    cin>>tCase>>total;
    for(int i=0;i<tCase;i++){
        cin>>inNum;
        v.emplace_back(inNum);
    }

    //AlgorithmZone
    for(int i=0;i<tCase;i++){
        for(int j=1;j<=total;j++) {
            if(j>=v[i]){
                dp[j]+=dp[j-v[i]];
            }
        }
    }
    cout<<dp[total]<<'\n';
    
    
    return 0;
}
