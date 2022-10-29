#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int a = sqrt(c);
        long long int b = 0;
        while(b<=a){
            if(a*a + b*b == c){
                return true;
            }
            else if(a*a + b*b <= c){
                b++;
            }
            else {
                a--;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    cout<<s.judgeSquareSum(16);
    return 0;
}