#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map <int, int> mp;
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second == 1){
                sum = sum + i.first;
            }
        }
        return sum;
    }
};

int main()
{
   
    return 0;
}