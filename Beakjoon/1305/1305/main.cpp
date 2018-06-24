//#include<cstdio>
#include <iostream>
#include<string.h>
using namespace std;
int f[1000001];

int main()
{
    string a;
    int i,j,n;
    cin>>n>>a;
    
    f[0]=j=-1;
    i=0;
    while(i<n)
    {
        if(j==-1||a[i]==a[j])f[++i]=++j;
        else j=f[j];
    }
    cout<<n-f[n]<<'\n';
}
