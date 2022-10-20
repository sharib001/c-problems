#include<iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long long int n = 0;
        while(n*n<=x){
            n++;
        }
        return n-1;
    }
};

int main()
{
    
    return 0;
}