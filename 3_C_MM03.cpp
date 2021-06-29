#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明 ：
// 輸入有多組測資，每一列為一組測資，每組輸入有兩個整數(int)。

// 輸出說明 ：
// 輸出該兩整數的和(int)，每一列為一組輸出結果。

int main(){
    int num1,num2;
    while(cin>>num1){
        cin>>num2;
        cout<<num1+num2<<endl;
    }
    return 0;
}