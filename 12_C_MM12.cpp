#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 假設你步行的速度為每秒1公尺，而你朋友小華在你前方，步行的速度則為每秒30英吋，
// 然而你需要幾秒鐘才能超越小華呢?(1英吋=2.54公分)。

// 輸入說明：
// 輸入兩人距離公尺數(int)。

// 輸出說明：
// 輸出第幾秒超越，秒數取整數(int)，無條件進入法。

int main(){
    int d;
    double s = 100 - 30*2.54;
    while(cin>>d){
        cout<<(int)(d*100/s)+1<<endl;
    }
    return 0;
}