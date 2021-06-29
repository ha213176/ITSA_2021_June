#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明 ：
// 每一組需輸入兩正整數，分別代表三角形的底及高。

// 輸出說明 ：
// 輸出三角形面積。

int main(){
    int b, h;
    while(cin>>b){
        cin>>h;
        cout<< fixed
            << setprecision(1)<<((double)b*h)/2<<endl;
    }
    return 0;
}