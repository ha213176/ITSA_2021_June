#include <iostream>
#include <iomanip>
using namespace std;


// 輸入說明：
// 輸入欲轉換之英哩數(int)。

// 輸出說明：
// 輸出公里(double)，四捨五入取到小數點以下第一位。

int main(){
    int in;
    while(cin>>in){
        cout<<fixed<<setprecision(1)<<in*1.6<<endl;
    }
    return 0;
}