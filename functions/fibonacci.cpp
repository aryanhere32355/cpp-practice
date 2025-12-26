#include <iostream>
using namespace std;

//adding functions
void Add(int x){
    int a=0, b=1, d;
    for( int c = 1; c<=x; c++){
    d=a+b;
    a=b;
    b=d;
    }
    cout<<"The "<< x <<"th"<<"term is = "<< d <<endl;
}
//updation and print
int main(){
    int n;
    cout<<"Enter the no. = ";
    cin>>n;
    if(n<0){
        cout<<"fibonacci series does'nt exist.\nPlease enter a positive no."<<endl;
    }  else if(n == 0){
        cout<<"The 0th term is 0\n";
    } else if(n == 1){
        cout<<"The second term is = 1";
    } else  {
    int a=n-1;
       Add(a);
    }

    return 0;
}