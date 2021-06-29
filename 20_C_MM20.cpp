#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// 輸入說明:
// 輸入一個十進位的整數

// 輸出說明:
// 把輸入的數轉為十六進位輸出

char get_hex(int n){
    if(n <= 9){
        return '0' + n;
    }
    else if(n <= 15)
        return 'A' + n - 10;
        cout<<"n = "<<n<<endl;
    return 'X';
}

int main(){
    int n;
    string rst;
    while(cin>>n){
        rst = "";

        while(n != 0){
            rst = get_hex(n%16) + rst;
            n /= 16;
        }
        cout<<rst<<endl;
    }
    return 0;
}