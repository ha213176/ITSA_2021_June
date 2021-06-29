#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入攝氏溫度(數值不一定都是整數)。

// 輸出說明：
// 輸出華氏溫度(四捨五入取至小數點第一位，整數需補零)。

int main(){
    double in;
    while(cin>>in){
        cout<<fixed<<setprecision(1)<<in*1.8+32<<endl;
    }
    return 0;
}