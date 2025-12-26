#include <iostream>
using namespace std;
int main(){

int nums[]={1,2,3,4,5,6};
int target = 4;
 int n=sizeof(nums)/sizeof(nums[0]);
    int a,b;
 for(int i=0;i<n;i++)   {
    for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
        a=i;
        b=j;   
        }}}
        cout<<a<<" "<<b;
return 0;
}    




