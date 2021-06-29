#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：

// 輸入一個正整數(< 231 – 1)。

// 輸出說明：
// 質數顯示 YES ；非質數顯示 NO 。

int main(){
    int N;
    int flag = 1;
    while(cin>>N){
        flag = 1; // 是質數
        for(int i = 2; i*i <= N; i++){
            if(N%i == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}