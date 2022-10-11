#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int len = s.length(), count=0, i=0;
        
        while(len--){
            if(s[i] == ' ' && count == 0){
                i++;
            }
            else if(s[i] != ' '){
                count++;
                i++;
            }
            else {
                break;
            }
        }
        return count;
    }
};

int main()
{
    Solution s1;
    cout<<s1.lengthOfLastWord("hello world");
    return 0;
}
