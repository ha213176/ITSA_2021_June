#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 試寫一個程式，輸入兩個整數，並計算兩整數間所有整數的總和。

// 輸入說明：
// 輸入兩個整數。

// 輸出說明：
// 輸出兩整數之間所有整數的總和。

int main(){
    int a, b;
    int rst;
    while(cin>>a>>b){
        rst = 0;
        for(int i = a; i <= b; i++){
           rst += i;
        }       
        cout<<rst<<endl;
    }
    return 0;
}