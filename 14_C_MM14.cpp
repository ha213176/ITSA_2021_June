#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入秒數。

// 輸出說明：
// 輸出天數，時數，分數，秒數。

int main(){
    int n;
    int d,h,m,s;
    while(cin>>n){
        d = n /86400;
        n -= d*86400;
        h = n /3600;
        n -= h*3600;
        m = n /60;
        s = n - m*60;
        
        cout<<d<<" days"<<endl;
        cout<<h<<" hours"<<endl;
        cout<<m<<" minutes"<<endl;
        cout<<s<<" seconds"<<endl;
    }
    return 0;
}