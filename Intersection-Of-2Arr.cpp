#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        unordered_map <int, int> mp1, mp2;
        for(auto i: nums1){
            mp1[i]++;
        }
        for(auto i: nums2){
            if(mp1.find(i) != mp1.end()){
            mp2[i]++;
            }
        }
        for(auto i: mp2){
            ans.push_back(i.first);
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}