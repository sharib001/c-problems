#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int n = 0;
        while(n*n <= num){
            n++;
        }
        if((n-1)*(n-1) == num){
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    Solution s;
    cout<<s.isPerfectSquare(49);
    return 0;
}
