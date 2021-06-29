#include <iostream>
#include <iomanip>
using namespace std;

// 輸入說明：
// 輸入一個整數。

// 輸出說明：
// 輸出平方值與立方值。

int main(){
    int n;
    while(cin>>n){
        cout<<n<<" "<<n*n<<" "<<n*n*n<<endl;
    }
    return 0;
}