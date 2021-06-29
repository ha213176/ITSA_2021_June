#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

// 輸入說明：
// 輸入一個整數，介於-128～127之間。

// 輸出說明：
// 以8位元的二進制顯示。

int main(){
    int n;
    while(cin>>n){
        cout<<bitset<8>(n)<<endl;
    }
    return 0;
}