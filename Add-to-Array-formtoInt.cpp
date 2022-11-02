#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector <int> sum;
        int i = num.size()-1;
        while(i>=0 || k>0){
            if(i>=0){
                sum.push_back((num[i]+k)%10);
                k = (num[i] + k)/10;
                i--;
            }
            else {
                sum.push_back(k%10);
                k /= 10;
            }
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};

int main()
{
    Solution s1;
    return 0;
}

