#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0; i<s.size(); i+=2*k){
            string temp = s.substr(i,k);
            reverse(temp.begin(), temp.end());
            s.replace(i,k,temp);
        }
        return s;
    }
};

int main()
{
    Solution s;
    return 0;
}