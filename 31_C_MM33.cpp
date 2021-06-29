#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 一個數如果恰好等於它的因數之和，這個數就稱為 " 完美數 " 
// （ perfect number ）。例如 6=1 ＋ 2 ＋ 3 ，因 1 、 2 與 3 都是 6 的因數，因而 6 是完美數。試撰寫一程式，輸入一個正整數 N ，找 1~N 的完美數。

// 輸入說明：
// 輸入一個正整數。

// 輸出說明：
// 輸出完美數。

int main(){
    int N;
    int tmp;
    int total;
    while(cin>>N){
        cout<<6;
        for(int i = 7; i <= N; i++){
            tmp = i;
            total = 0;
            for(int j = 1; j < tmp; j++){
                if(tmp%j == 0){
                    total += j;
                }
            }
            if(total == i)
                cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}