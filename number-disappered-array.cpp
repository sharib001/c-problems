#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> ans;
        map <int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i=1; i<=nums.size(); i++){
            if(!mp.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}