#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 輸入說明：
// 輸入一整數座標，依序分別X與Y。

// 輸出說明：
// 輸出此座標位置在圓內或圓外訊息。
// 半徑 100 
int main(){
    int x, y;
    
    while(cin>>x>>y){
        if(pow(pow(x,2)+pow(y,2),0.5) <= 100){
            cout<<"inside"<<endl;
        }
        else{
            cout<<"outside"<<endl;
        }
    }
    return 0;
}