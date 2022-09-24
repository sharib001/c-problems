#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(-1);
        ans.push_back(-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(ans[0]==-1){
                    ans[0]=i;
                    ans[1]=i;
                }else{
                    ans[1]=i;
                }
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums;
    int n, target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> target;
    Solution obj1;
    obj1.searchRange(nums,target);
    return 0;
}