#include <iostream>
#include <iomanip>
using namespace std;

// 問題描述：
// 試撰寫一程式，可輸入月份，然後判斷其所屬的季節
// （ 3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

// 輸入說明：
// 輸入月份。

// 輸出說明：
// 輸出該月份的季節， 3~5 月為春季(Spring)， 6~8 月為夏季(Summer)
// ， 9~11 月為秋季(Autumn)， 12~2 月為冬季(Winter)。

int main(){
    int N;
    while(cin>>N){
       if(N>=3 && N <= 5){
           cout<<"Spring"<<endl;
       }
       else if(N>=6 && N <= 8){
           cout<<"Summer"<<endl;
       }
       else if(N>=9 && N <= 11){
           cout<<"Autumn"<<endl;
       }
       else{
           cout<<"Winter"<<endl;
       }
    }
    return 0;
}