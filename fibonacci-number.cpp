#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int t1 = 0; 
        int t2 = 1;
        int t  = t1 + t2;
        if(n == 0){
            return t1;
        }
        if(n == 1){
            return t2;
        }
        for(int i=2; i<=n; i++){
            t = t1 + t2;
            t1 = t2;
            t2 = t;
        }
        return t;
    }
};

int main()
{
    
    return 0;
}