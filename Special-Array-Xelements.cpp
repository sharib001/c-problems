#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i=1; i<=nums.size(); i++){
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(i<=nums[j]){
                    count++;
                }
            }
            if(i == count){
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    return 0;
}