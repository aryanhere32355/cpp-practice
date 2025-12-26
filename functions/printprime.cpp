#include<iostream>
using namespace std;

//to check prime
bool Check(int a){
     if(a<=1){
        return false;
    }
     for(int i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
//to print primes
void Print(int a){
    for(int b = 2; b<=a ; b++){
    if(Check(b)){
    cout<< b <<", ";
    }
    }
    cout << endl;
}



int main(){
    Print(80);
    return 0;
}
