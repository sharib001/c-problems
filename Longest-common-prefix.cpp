#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last  = strs[strs.size()-1];
        for(int i=0; i<first.size(); i++){
            if(first[i]!=last[i]){
                break;
            }
            else {
                ans = ans + first[i];
            }           
        }
        return ans;
    }
};

int main()
{
    
    return 0;
}