#include<iostream>
using namespace std;
int main () {
    int n1,n2;
    cout <<"Enter the numbers: ";
    cin >> n1>>n2;
    char button;
    cout<< "Enter the operation want to do = ";
    cin >> button;
    switch(button){
        case '+':
        cout<< n1+n2;
        break;
        case '-':
        cout<< n1-n2;
        break;
        case '*':
        cout<< n1*n2;
        break;
        case '/':
        cout<< n1/n2;
        break;
        case '%':
        cout<< n1%n2;
        break;
        default:
        cout<<"Enter a valid operator";
        
    }


    return 0;
}