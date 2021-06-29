#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入票價。

// 輸出說明：
// 輸出各幣值硬幣最少的數量。

int main(){
    int n;
    while(cin>>n){
        cout<<"NT10="<<n/10<<endl;
        n %= 10;
        cout<<"NT5="<<n/5<<endl;
        n %= 5;
        cout<<"NT1="<<n<<endl;
    }
    return 0;
}