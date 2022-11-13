#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> nums = {10,20,30,5,10,50};
    int current = nums[0];
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i]<= nums[i-1]){
            ans = max(current, ans);
            current = nums[i];
        }
        else {
            current += nums[i];
        }
    }
    ans = max(ans, current);
    cout<<ans<<endl;
    return 0;
}