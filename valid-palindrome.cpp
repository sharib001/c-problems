#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while (i<j){
            if(!iswalnum(s[i])){
                i++;
            }
            else if(!iswalnum(s[j])){
                j--;
            }
            else if(toupper(s[i]) != toupper(s[j])){
                return false;
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    return 0;
}