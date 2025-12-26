#include <iostream>
using namespace std;

int sumD(int n){
    int a=0;
    while(n>0){
        int lastdig = n%10;
        n /= 10;
        a += lastdig;
    }

    return a ;
}

int main() {
    cout << "sum of digits = "<< sumD(15555);

    return 0;
}