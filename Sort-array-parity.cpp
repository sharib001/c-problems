#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector <int> even;
        vector <int> odd;
        vector <int> ans;

        for (int i = 0; i < nums.size(); i++){
            if(nums[i]%2 == 0){
                even.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
        }
        
        int k = 0;
        int j = 0;
        for (int i = 0; i < nums.size(); i++){
            if(i%2 == 0){
                ans.push_back(even[k]);
                k++;
            }
            else {
                ans.push_back(odd[j]);
                j++;
            }
        }
        
        return ans;
    }
};

int main()
{
    
    return 0;
}