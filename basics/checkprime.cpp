#include <iostream>
using namespace std;



//check prime
bool prime(int n ) {
    if(n <= 1){
        return false;
    }
    for(int i = 2; i<n ; i++){
        if(n%i == 0){
            return false; 
        }
    }
    return true;
}
// print the prime nos.
void help(int n) {
    for(int i=2; i<=n ; i++){
       if(prime(i)){
        cout << i << ", ";
       }
    }

cout << endl;


}

int main() {
   help(88);
    


    return 0;
}