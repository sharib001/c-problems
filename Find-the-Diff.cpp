#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        map <char, int> mp;
        if(s == ""){
            ans = t[0];
            return ans;
        }
        for(int i=0; i<t.size(); i++){
            mp[t[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            mp[s[i]]--;
        }
        for(auto i:mp){
            if(i.second == 1){
                ans = i.first;
            }
        }
        return ans;
    }
};

int main()
{
    return 0;
}

