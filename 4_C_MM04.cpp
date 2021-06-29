#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明 ：
// 輸入兩個整數。

// 輸出說明 ：
// 輸出總和、乘積、差、商、和餘數。

// ※餘數≧0。

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
    cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
    cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
    if(num1%num2 >= 0)
        cout<<num1<<"/"<<num2<<"="<<num1/num2<<"..."<<num1%num2<<endl;
    else{
        if(num1 > 0){
            int tmp = num1/num2+1;
            cout<<num1<<"/"<<num2<<"="<<tmp<<"..."<<num1-tmp*num2<<endl;
        }
        else{
            int tmp = num1/num2-1;
            cout<<num1<<"/"<<num2<<"="<<tmp<<"..."<<num1-tmp*num2<<endl;
        }
    }
    return 0;
}