#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 1;
    for(int i=1; i<=n; i++){
       sum *= i;
    }

return sum;
}

int nCr(int n, int r) {
    int factn= sumN(n);
    int factr= sumN(r);
    int factnmr=sumN(n-r);

    return factn/(factr*factnmr);
    

}
int main(){
   int n=1 , r=0;
    cout << nCr(10,3)<<endl;
    cout << n;
    
    return 0;
}
