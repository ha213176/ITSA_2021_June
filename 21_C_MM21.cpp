#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明:
// 輸入一個整數 n，0 < n < 20

// 輸出說明:
// 輸出答案


int main(){
    int n;
    long long int rst;
    while(cin>>n){
        rst = 1;
        for(int i = 2; i <= n; i++){
            rst *= i; 
        }
        cout<<rst<<endl;
    }
    return 0;
}