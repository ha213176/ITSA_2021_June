#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入兩個數字。

// 輸出說明：
// 輸出和的平方值。

int main(){
    int a, b;
    while(cin>>a){
        cin>>b;
        cout<<(a+b)*(a+b)<<endl;
    }
    return 0;
}