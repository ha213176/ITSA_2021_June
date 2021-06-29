#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 每一次執行輸入兩個整數，依序分別為工時、時薪。

// 輸出說明：
// 輸出薪水(double)，取至小數點以下第一位。

// (1) 60 小時 ( 含 ) 以下的薪水部份，以固定時薪計算。
// (2) 61 ～ 120 小時之間的薪水部份，以固定時薪的 1.33 倍計算。
// (3) 第 121 小時以上的薪水部份，以固定時薪的 1.66 倍計算。

int main(){
    int hour, pay;
    double rst;
    while(cin>>hour>>pay){
        rst = 0;
        if(hour <= 60){
            rst = hour*pay;
        }
        else if(hour <= 120){
            hour -= 60;
            rst = 60*pay + hour*pay*1.33;
        }
        else{
            hour -= 120;
            rst = 60*2.33*pay + hour*1.66*pay;
        }
        // rst = rst*1000000 - (int)rst%1000000;

        cout<<fixed<<setprecision(1)<<rst<<endl;
        
    }
    return 0;
}