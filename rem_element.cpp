#include<bits/stdc++.h>
using namespace std;

int rm_element(vector <int> &nums, int val){
    int count=0;
    if (nums.size() == 0)
    {
        return 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}

int main()
{   
    vector <int> nums = {3,2,2,3};
    int val=3;
    cout<<rm_element(nums , val);
    return 0;
}