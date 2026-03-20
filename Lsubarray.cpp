#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int j=0, x=0, i=0, sum=0, mx=0;
        int n=nums.size();
        while(i<n && j<n){
           if(sum<k){ 
            sum+=nums[i];
            i++;
           }else if(sum==k){
            mx=max(mx, i-j);
            j++;
            i=j;
            sum=0;
           }
        }
        return mx;
    }

};

int main(){
    Solution obj;

    vector<int> nums =   {1, 2, 1, 1, 1, 3, 2};
    int k = 4;

    cout << obj.longestSubarray(nums, k);

    return 0;
}