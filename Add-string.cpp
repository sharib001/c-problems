#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i,j,sum=0;
        i = num1.size() - 1;
        j = num2.size() - 1;
        string ans;
        while(i>=0 || j>=0 || sum != 0){
            if(i>=0){
                sum += (num1[i] - 48);
                i--;
            }
            if(j>=0){
                sum += (num2[j] - 48);
                j--;
            }
            ans += (sum%10 + 48);
            sum /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{

    return 0;
}