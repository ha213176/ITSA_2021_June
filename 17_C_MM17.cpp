#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 輸入說明：
// 輸入一組兩個整數。

// 輸出說明：
// 輸出兩數字的最大公因數

int main(){
    int a,b;
    int res, tmp;
    while(cin>>a>>b){
        res = 1;
        if(b>a){
            tmp = a;
            a = b;
            b = tmp;
        }
        for(int i = 2; i <= a; i++){
            if(a%i == 0 && b%i == 0){
                res *= i;
                a /= i;
                b /= i;
                i = 2;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}