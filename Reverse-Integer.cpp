#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long int ans=0;
        while(x!=0){
            int rem = x%10;
            ans = ans*10 + rem;
            if(ans>INT32_MAX || ans<INT32_MIN){
                return 0;
            }
            x = x/10;
        }
        return ans;
    }
};

int main()
{
    return 0;
}