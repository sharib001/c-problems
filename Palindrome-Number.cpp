#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp = x;
        long long int ans = 0;
        while(temp!=0){
            int rem = temp%10;
            ans = ans*10 + rem;
            temp = temp/10;
        }
        if(ans==x && x>=0){
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    return 0;
}