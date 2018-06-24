#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> v(81,0);
    int max = 0,ans = 0;
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                v[i+j+k]+=1;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max = v[i];
            ans = i;
        }
    }
    cout<<ans<<'\n';
    
    return 0;
}
