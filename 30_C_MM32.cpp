#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// 問題描述：
// 所謂 " Armstrong數 " 是指一個三位數的整數，其各位數字之立方和等於該數本身。例如： 153 是一個  Armstrong數，因為 153 =1 3 + 53 + 33 。試撰寫一程式，判斷是否為  Armstrong數。

// 輸入說明：
// 輸入一個三位數正整數。

// 輸出說明：
// 是 阿姆斯壯數輸出 Yes ，不是 阿姆斯壯數輸出 No 的訊息。

int str_pow_3(char c){
    int n = c - '0';
    return n*n*n;
}

int main(){
    int N;
    string str;
    while(cin>>N){
        str = to_string(N);
        if(N == str_pow_3(str[0]) + str_pow_3(str[1]) + str_pow_3(str[2])){
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}