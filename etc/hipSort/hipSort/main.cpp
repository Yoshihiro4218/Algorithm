//
//  hipSort.cpp
//  hipSort
//  20133098 정보통신공학과 김덕구
//  Created by deok9 on 2018. 5. 14..
//  Copyright © 2018년 deok9. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
void heapify(int h, int m);
void HeapSort();
int main(int argc, const char * argv[]) {
    freopen("/Users/deok9/desktop/numbers.txt", "r", stdin);
    int inNum;
    
    //INPUT ZONE
    v.emplace_back(0);
    while(cin>>inNum)
        v.emplace_back(inNum);
    
    //Algorithm ZONE
    HeapSort();
    
    //OUTPUT ZONE
    for(auto x:v)
        cout<<x<<" ";
    cout<<'\n';
    
    return 0;
}
void swap(int a, int b){
    int tmp = v[a];
    v[a]=v[b];
    v[b]=tmp;
}
void heapify(int h, int m){
    int pN = v[h],j;
    for (j = 2*h; j <= m; j*=2){
        if (j < m && v[j] < v[j+1])
            j+=1;
        if (pN >= v[j])
            break;
        else
            v[j/2] = v[j];
    }
    v[j/2] = pN;
}
void HeapSort(){
    int n = int(v.size())-1;
    for (int i=n/2; i >= 1; i--)
        heapify(i, n);
    for(int i=n-1;i>=1;i--){
        swap(1, i+1);
        heapify(1, i);
    }
}
