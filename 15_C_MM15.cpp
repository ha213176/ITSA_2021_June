#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 每一組輸入有兩正整數字，分別代表X與Y座標。

// 輸出說明：
// 輸出此點座標在正方形範圍內或外。
// 有一正方形，長、寬均為100，且起始座標為(0,0)。
int main(){
    int x, y; 
    while(cin>>x>>y){
        if(x <= 100 && x >= 0 && y <= 100 && y >= 0){
            cout<<"inside"<<endl;
        }
        else{
            cout<<"outside"<<endl;
        }
    }
    return 0;
}