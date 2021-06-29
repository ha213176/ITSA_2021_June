#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 撰寫一個程式，輸入一正整數 N ， 找出 1 ～ N 的整數裡，可以被 2 與 3 整除，
// 但不能被 12 整除的整數，並將這些數字做加總。

// 輸入說明：

// 輸入一個正整數。

// 輸出說明：
// 輸出總和之值。

int main(){
    int N;
    int rst;
    while(cin>>N){
        rst = 0;
        for(int i = 1; i <= N; i++){
            if(i%6 == 0 && i%12 != 0){
                rst += i;
            }
        }
        cout<<rst<<endl;
    }
    return 0;
}