#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入一正整數。

// 輸出說明：
// 計算出1到N之間可被3整除的數值之總和

int main(){
    int N;
    int rst;
    while(cin>>N){
        rst = 0;
        for(int i = 3; i <= N; i++){
            if(i%3 == 0){
                rst += i;
            }
        }       
        cout<<rst<<endl;
    }
    return 0;
}