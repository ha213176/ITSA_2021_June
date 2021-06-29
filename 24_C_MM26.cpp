#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 試寫一個程式，輸入任意正整數N，並輸出 1*1、2*2、...、N*N之結果。

// 輸入說明：
// 輸入一正整數。

// 輸出說明：
// 輸出相乘的積。

int main(){
    int N;
    while(cin>>N){
        for(int i = 1; i <= N; i++){
           cout<<i<<"*"<<i<<"="<<i*i<<endl;
        }       
    }
    return 0;
}