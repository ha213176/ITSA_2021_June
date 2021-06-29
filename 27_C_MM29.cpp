#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 試撰寫一個程式，可輸入一個整數，並找出小於此數的最大質數。

// 輸入說明：
// 輸入一個正整數。

// 輸出說明：
// 輸出最大質數。

int main(){
    int N;
    int rst;
    int flag = 1;
    while(cin>>N){
        for(int i = N-1; i >= 2; i--){
            flag = 1;//是質數
            for(int j = 2; j*j <= i; j++){
                if(i%j == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}