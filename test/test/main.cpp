#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<string> input;
    vector<vector<string>> res;
    vector<string> v_res;
    string tmp[2];
    string s = "";
    int num = 0, num2 = 0;
    input.emplace_back("Enter uid1234 Muzi");
    input.emplace_back("Enter uid4567 Prodo");
    input.emplace_back("Leave uid1234");
    input.emplace_back("Enter uid1234 Prodo");
    input.emplace_back("Change uid4567 Ryan");
    for(string x : input){
        s = "";
        for(char y : x){
            if(y==' '){
                tmp[num2]=s;
                num2++;
                s = "";
                num++;
                continue;
            }
            s+=y;
            num++;
        }
        num2=0;
        if(x[4]!='e'){
            v_res.emplace_back(tmp[0]);
            v_res.emplace_back(tmp[1]);
            v_res.emplace_back(s);
            for(vector<string> x : res){
                if(x[1]==tmp[1])
            }
        }else{
            v_res.emplace_back(tmp[0]);
            v_res.emplace_back(tmp[1]);
        }
        v_res.clear();
    }
    
    
    return 0;
}
