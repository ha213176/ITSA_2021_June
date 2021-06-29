#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入一個正整數，i的值小於31。

// 輸出說明：
// 輸出 的ｉ次方的值。

// 若 i > 31 輸出 "Value of more than 31"

int main(){
    int n;
    while(cin>>n){
        if(n > 31){
            cout<<"Value of more than 31"<<endl;
        }
        else
            cout<<(1<<n)<<endl;
    }
    return 0;
}