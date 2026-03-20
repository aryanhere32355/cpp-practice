#include<iostream>
using namespace std;
int main(){
    string b="aba,aca ba";
string a="";
    for(char c:b){
        if(c!=' ' && c!=','){
            a+=c;
        }
    }
    cout<<"\n"<<a;
    for(int i=0; i<a.length()/2; i++){
        if(a[i]==a[a.length()-i-1]){
            cout<<"yes" ;
            // break;
        }else {
            cout<<"no";
        break;
    }

    }
    cout<<"\n"<<a<<"\n"<<b;
    return 0;
}