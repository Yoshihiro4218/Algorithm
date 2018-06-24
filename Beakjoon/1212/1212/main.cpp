#include <iostream>
#include <cstring>
using namespace std;

char number[333336];
int main(){
    ios_base::sync_with_stdio(false);
    int lnumber,i;
    int enumber;
    
    cin >> number;
    lnumber = strlen(number);
    if(number[0]=='0'){
        cout<<'0'<<'\n';
        return 0;
    }
    for(i=0; i<lnumber; i++){
        enumber = number[i]-'0';
        if(i==0 && enumber>0 && enumber <=3){
            switch(enumber){
                case 1 :
                    cout << 1;    break;
                case 2 :
                    cout << 10;    break;
                case 3 :
                    cout << 11;    break;
            }
        }
        else{
            switch(enumber){
                case 0 :
                    cout << "000";    break;
                case 1 :
                    cout << "001";    break;
                case 2 :
                    cout << "010";    break;
                case 3 :
                    cout << "011";    break;
                case 4 :
                    cout << "100";    break;
                case 5 :
                    cout << "101";    break;
                case 6 :
                    cout << "110";    break;
                case 7 :
                    cout << "111";    break;
            }
        }
    }
    cout <<'\n';
}
