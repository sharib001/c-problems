#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int ans = 1;
        for(int i=0; i<s.size(); i++){
            if(s[i] == s[i+1]){
                count++;
                ans = max(count, ans);
            }
            else {
                count = 1;
            }
        }
        return ans;
    }
};

int main(){
    
}