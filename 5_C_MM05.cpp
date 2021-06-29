#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 輸入說明 ：
// 輸入一個大於零的數字(double)為正方形之邊長。

// 輸出說明 ：
// 輸出正方形面積(double)，四捨五入取到小數點以下第一位。

int main(){
    double s;
    double mul;
    while(cin>>s){
        mul = s*s;
        mul = round(mul*10);
        cout<< fixed<<setprecision(1)<<mul/10<<endl;
    }
    return 0;
}