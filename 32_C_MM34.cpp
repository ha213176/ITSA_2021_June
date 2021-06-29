#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 試撰寫一程式，由鍵盤輸入一個正整數，然後求其所有的因數，例如輸入 24 ，則印出 24 的所有因數 1 、 2 、 3 、 4 、 6 、 8 、 12 與 24 。

// 輸入說明：
// 輸入一個正整數。

// 輸出說明：
// 輸出該數的因數。

int main(){
    int N;
    while(cin>>N){
        cout<<1;
        for(int i = 2; i <= N; i++){
            if(N%i == 0){
                cout<<" "<<i;
            }
        }
        cout<<endl;
    }
    return 0;
}