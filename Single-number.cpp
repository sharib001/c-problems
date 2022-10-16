#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        if(nums.size() == 1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != nums[i+1]){
                ans = nums[i];
                break;
            }
            else {
                i++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj1;
    
    return 0;
}