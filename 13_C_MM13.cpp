#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：

// 輸入包含兩行數字，第一行為開始停車時間，第二行為結束停車時間，每一行包含兩個正整數hour、minute。

// 注意：0 ≤ hour ≤ 23，0 ≤ minute ≤ 59。


// 輸出說明：
// 輸出停車費。

int main(){
    int h1, m1, h2, m2;
    int cost;
    while(cin>>h1){
        cost = 0;
        cin>>m1>>h2>>m2;
        h1 = h2 - h1;
        m1 = m2-m1;
        if(m1 < 0){
            h1--;
            m1 += 60;
        }
        // cout<<h1<<" "<<m1<<endl;
        if(h1 < 2){//停車2小時以內，每半小時30元
            cost = (h1*2+m1/30)*30;
        }
        else if(h1 <= 4){// 超過2小時，但未滿4小時的部份，每半小時40元
            h1 -= 2;
            cost = 120 + (h1*2+m1/30)*40;
        }
        else{ //超過4小時以上的部份，每半小時60元
            h1 -= 4;
            cost = 280 + (h1*2+m1/30)*60;
        }
        cout<<cost<<endl;
    }
    return 0;
}