#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    vector<int> v(9,0);
    char inChar;
    int ans=0;
    while(cin>>inChar){
        v[int(inChar)-48]++;
    }
    v[6]=ceil((float(v[6]+v[9])/2));
    v[9]=v[6];
    for(auto x: v){
        ans = max(x,ans);
    }
    cout<<ans<<'\n';
    return 0;
}
