#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明 ：
// 每一組依序分別輸入梯形的上底、下底及高的整數。

// 輸出說明 ：
// 輸出梯形面積。

int main(){
    int t, b, h;
    while(cin>>t){
        cin>>b>>h;
        cout<<"Trapezoid area:"<< fixed
            << setprecision(1)<<(double)((double)((t+b)*h)/2)<<endl;
    }
    return 0;
}