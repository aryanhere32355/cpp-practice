#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4};
    int size=4,c=INT_MAX,d=INT_MIN,a=-1,b=-1;
    for(int i =0; i<size; i++){
if(arr[i]<c){//for min
    c=arr[i];
    b++;
}  
}
for(int i=0;i<size;i++){
    if(arr[i]>d){//for max
    d=arr[i];
    a++;
}
}
    
swap(arr[a],arr[b]);
for(int i=0;i<size;i++){
    cout<<arr[i];
}
return 0;
}