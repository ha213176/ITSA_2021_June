#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 試寫一個程式，讓使用者輸入任意正整數 N ，可計算出 1 到 N 之間屬於 5 和 7 的倍數的數值。

// 輸入說明：
// 輸入一個正整數。

// 輸出說明：
// 輸出 5 和 7 的倍數的數字。

int main(){
    int N;
    int tmp;
    while(cin>>N){
        tmp = 35;
        while(tmp <= N){
            cout<<tmp;
            if(tmp+35 <= N){
                cout<<" ";
            }
            tmp += 35;
        }
        cout<<endl;

    }
    return 0;
}