#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/input.txt","r",stdin);
    int powNum=1;
    long long int ans = 0;
    char *a[10]= {"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
    char *tmp = (char*)malloc(sizeof(char)*6);
    
    scanf("%s",tmp);
    for(int j=0;j<10;j++){
       if(!strcmp(a[j],tmp)){
           ans+=(j*10);
       }
    }
    scanf("%s",tmp);
    for(int j=0;j<10;j++){
        if(!strcmp(a[j],tmp)){
            ans+=(j*1);
        }
    }
    scanf("%s",tmp);
    for(int j=0;j<10;j++){
        if(!strcmp(a[j],tmp)){
            ans*=(powNum);
        }
        powNum*=10;
    }
    
    printf("%lld\n",ans);
    return 0;
}
